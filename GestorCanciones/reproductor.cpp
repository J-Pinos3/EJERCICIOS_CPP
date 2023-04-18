#include "reproductor.h"
#include "ui_reproductor.h"

Reproductor::Reproductor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reproductor)
{
    ui->setupUi(this);
    ListarCanciones();
}

Reproductor::~Reproductor()
{
    delete ui;
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
