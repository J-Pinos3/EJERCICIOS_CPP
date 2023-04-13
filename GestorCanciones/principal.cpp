#include "principal.h"
#include "ui_principal.h"
#include <QFileDialog>
#include <QMessageBox>

Principal::Principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);

    MainWindow manw;
    if( !manw.conOpen() ){
        ui->status_con->setText( "No Conectado");

    }else{
        ui->status_con->setText( "Conectado");

    }

}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_fileFoto_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"Abrir Foto");
    qDebug() << "Archivo seleccionado: " << filename << " \n";
    ui->rutaFoto->setText(filename);
}


void Principal::on_fileMp3_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"Abrir Mp3");
    qDebug() << "Archivo seleccionado: " << filename << " \n";
    ui->rutaMP3->setText(filename);
}


void Principal::on_btnAgregar_clicked()
{
    MainWindow conec;
    QString titulo, artista, genero, album, fotofile, mp3file;

    titulo = ui->txtTitulo->text();
    artista = ui->txtArtista->text();
    genero = ui->txtGenero->text();
    album = ui->txtAlbum->text();
    fotofile = ui->rutaFoto->text();
    mp3file = ui->rutaMP3->text();


    if( !conec.conOpen() ){
        QMessageBox::information(this, "Conexión",
                    "Error al abrir la Base de Datos");
        return ;
    }


    conec.conOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO cancion(titulo, artista, album, genero, foto, mp3) VALUES(:titulo, :artista, :album, :genero, :foto, :mp3)");
    qry.bindValue(":titulo",titulo);
    qry.bindValue(":artista",artista);
    qry.bindValue(":album",album);
    qry.bindValue(":genero",genero);
    qry.bindValue(":foto",fotofile);
    qry.bindValue(":mp3",mp3file);

    if( qry.exec() ){
        QMessageBox::information(this, "Insertar","Canción insertada exitosamente.");
    }else{
        QMessageBox::critical(this, "Insertar","No se pudo insertar la canción");
        qDebug() << "Error: " << qry.lastError() <<"\n";
    }

    QSqlDatabase::database().commit();
    conec.conClose();

}

