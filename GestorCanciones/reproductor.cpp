#include "reproductor.h"
#include "ui_reproductor.h"
#include <QMediaPlayer>
#include <QAudioOutput>

Reproductor::Reproductor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reproductor)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);
    audiooutput = new QAudioOutput(this);
    ListarCanciones();

    connect(ui->tblSongs, SIGNAL(cellClicked(int,int)), this, SLOT(on_tblSongs_cellActivated(int, int)) );

    connect( mMediaPlayer, &QMediaPlayer::positionChanged, [&](qint64 pos){
        ui->avance->setValue(pos);
    } );

    connect(mMediaPlayer, &QMediaPlayer::durationChanged, [&](qint64 dur){
        ui->avance->setMaximum(dur);
    } );
}

Reproductor::~Reproductor()
{
    delete ui;
    //delete mMediaPlayer;
}

void Reproductor::ListarCanciones(){
    QPixmap Image;
    MainWindow conec;
    conec.conOpen();

    QSqlQuery qry(conec.mydb);
    qry.prepare("SELECT titulo,artista,album,genero,foto FROM cancion");

    if( qry.exec() ){
        int row_number = 0;
        ui->tblSongs->setRowCount(qry.size());

        while( qry.next() ){
            ui->tblSongs->setItem( row_number,0, new QTableWidgetItem(QString(qry.value("titulo").toString())) );
            ui->tblSongs->setItem( row_number,1, new QTableWidgetItem(QString(qry.value("artista").toString())) );
            ui->tblSongs->setItem( row_number,2, new QTableWidgetItem(QString(qry.value("album").toString())) );
            ui->tblSongs->setItem( row_number,3, new QTableWidgetItem(QString(qry.value("genero").toString())) );

            QTableWidgetItem *ImageItem = new QTableWidgetItem;
            Image.load(qry.value("foto").toString(),"JPG");
            ImageItem->setData(Qt::DecorationRole, Image.scaled(100,100));
            ui->tblSongs->setItem( row_number,4, ImageItem );
            ui->tblSongs->setVisible(true);

            row_number++;
        }
        conec.conClose();
    }
}




void Reproductor::on_tblSongs_cellActivated(int row, int column)
{
    QString tit = ui->tblSongs->item(row, 0)->text();
    QString art = ui->tblSongs->item(row, 1)->text();
    QString alb = ui->tblSongs->item(row, 2)->text();
    QString gen = ui->tblSongs->item(row, 3)->text();

    ui->txtTitulo->setText(tit);
    ui->txtArtista->setText(art);
    ui->txtAlbum->setText(alb);


    QString filename;
    QPixmap Image;
    MainWindow conec;
    conec.conOpen();

    QSqlQuery qry(conec.mydb);
    qry.prepare("SELECT foto, mp3 FROM cancion WHERE titulo='"+tit+"' and artista='"+art+"' and album='"+alb+"' and genero='"+gen+"'");

    if( qry.exec() ){


        while( qry.next() ){
            //ui->tblSongs->setItem( row_number,0, new QTableWidgetItem(QString(qry.value("titulo").toString())) );

            Image.load(qry.value("foto").toString(),"JPG");
            ui->lblFoto->setPixmap(Image.scaled(100,100));

            qDebug() <<"Ruta del mp3"<<qry.value("mp3").toString() << "\n";
            filename = qry.value("mp3").toString();
        }
        conec.conClose();
    }
    //mMediaPlayer->setMedia(QUrl::fromLocalFile(filename) );
    //mMediaPlayer->setVolume(ui->volumen->value());
    mMediaPlayer->setSource(QUrl::fromLocalFile(filename) );
    mMediaPlayer->setAudioOutput(audiooutput);
    audiooutput->setVolume(ui->volumen->value());

    on_btnPlay_clicked();
}


void Reproductor::on_btnPlay_clicked()
{
    mMediaPlayer->play();
}


void Reproductor::on_btnPause_clicked()
{
    mMediaPlayer->pause();
}


void Reproductor::on_btnStop_clicked()
{
    mMediaPlayer->stop();
}


void Reproductor::on_btnMute_clicked()
{
    mMediaPlayer->setAudioOutput(audiooutput);
    audiooutput->setVolume(ui->volumen->value());

    if(ui->btnMute->text() == "Mute" ){
        //mMediaPlayer->setMuted(true);
        audiooutput->setMuted(true);
        ui->btnMute->setText("Unmute");
    }else{
        //mMediaPlayer->setMuted(false);
        audiooutput->setMuted(false);
        ui->btnMute->setText("Mute");
    }

}


void Reproductor::on_volumen_valueChanged(int value)
{
    mMediaPlayer->setAudioOutput(audiooutput);
    audiooutput->setVolume(ui->volumen->value());
    //mMediaPlayer->setVolume(value);
    audiooutput->setVolume(value);
}

