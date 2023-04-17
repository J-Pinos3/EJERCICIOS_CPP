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


void Principal::on_btnEliminar_clicked()
{
    MainWindow conec;
    QString titulo;

    titulo = ui->txtTitulo->text();


    if( !conec.conOpen() ){
        QMessageBox::information(this, "Conexión",
                    "Error al abrir la Base de Datos");
        return ;
    }


    conec.conOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM cancion WHERE titulo = '"+titulo+"'");


    if( qry.exec() ){
        QMessageBox::information(this, "Eliminar","Canción eliminada exitosamente.");
    }else{
        QMessageBox::critical(this, "Eliminar","No se pudo eliminar la canción");
        qDebug() << "Error: " << qry.lastError() <<"\n";
    }

    QSqlDatabase::database().commit();
    conec.conClose();
}


void Principal::on_btnActualizar_clicked()
{
    MainWindow conec;
    QString titulo, artista, genero, album, fotofile, mp3file, songid;

    titulo = ui->txtTitulo->text();
    artista = ui->txtArtista->text();
    genero = ui->txtGenero->text();
    album = ui->txtAlbum->text();
    fotofile = ui->rutaFoto->text();
    mp3file = ui->rutaMP3->text();
    songid = ui->txtID->text();


    if( !conec.conOpen() ){
        QMessageBox::information(this, "Conexión",
                    "Error al abrir la Base de Datos");
        return ;
    }


    conec.conOpen();
    QSqlQuery qry;
    qry.prepare("UPDATE cancion SET titulo=:titulo, artista=:artista, album=:album, genero=:genero, foto=:foto, mp3=:mp3 WHERE id='"+songid+"'");
    qry.bindValue(":titulo",titulo);
    qry.bindValue(":artista",artista);
    qry.bindValue(":album",album);
    qry.bindValue(":genero",genero);
    qry.bindValue(":foto",fotofile);
    qry.bindValue(":mp3",mp3file);



    if( qry.exec() ){
        QMessageBox::information(this, "Actualizar","Canción actualizada exitosamente.");
    }else{
        QMessageBox::critical(this, "Insertar","No se pudo actualizar la canción");
        qDebug() << "Error: " << qry.lastError() <<"\n";
    }

    QSqlDatabase::database().commit();
    conec.conClose();
}


void Principal::on_btnListar_clicked()
{

    //background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));
    /*
    QSqlQueryModel *model = new QSqlQueryModel();


    conec.conOpen();
    QSqlQuery *qry = new QSqlQuery(conec.mydb);
    qry->prepare("SELECT * FROM cancion");
    qry->exec();

    model->setQuery(*qry);

    qDebug() <<"Valors de la consulta select * \n\n";
    for(int row = 0; row < model->rowCount(); row++){
        for(int col = 0; col < model->columnCount(); col++){
            qDebug() << "Fila " << row <<", Columna " << col << ":"
                     << model->data(model->index(row,col)).toString()<< "\n";
        }
    }

    ui->tableViewCRUD->setModel(model);

    ----------------------------------------------------------

    conec.conOpen();

    QSqlQueryModel *querymodel = new QSqlQueryModel();
    querymodel->setQuery("SELECT * FROM cancion");
    ui->tableViewCRUD->setModel(querymodel);
    ui->tableViewCRUD->show();

    qDebug() <<"Valors de la consulta select * \n\n";
    for(int row = 0; row < querymodel->rowCount(); row++){
        for(int col = 0; col < querymodel->columnCount(); col++){
            qDebug() << "Fila " << row <<", Columna " << col << ":"
                     << querymodel->data(querymodel->index(row,col)).toString()<< "\n";
        }
    }
    //conec.conClose(); NO cierro la conexión
    qDebug() << (querymodel -> rowCount());

    */

    MainWindow conec;
    conec.conOpen();

    QSqlQuery qry(conec.mydb);

    qry.prepare("SELECT * FROM cancion");
    if( qry.exec() ){
        int row_number = 0;
        ui->tableWidget1->setRowCount(qry.size());
        while( qry.next() ){
            ui->tableWidget1->setItem( row_number,0, new QTableWidgetItem(QString::number(qry.value("id").toInt())) );
            ui->tableWidget1->setItem( row_number,1, new QTableWidgetItem(QString(qry.value("titulo").toString())) );
            ui->tableWidget1->setItem( row_number,2, new QTableWidgetItem(QString(qry.value("artista").toString())) );
            ui->tableWidget1->setItem( row_number,3, new QTableWidgetItem(QString(qry.value("album").toString())) );
            ui->tableWidget1->setItem( row_number,4, new QTableWidgetItem(QString(qry.value("genero").toString())) );
            ui->tableWidget1->setItem( row_number,5, new QTableWidgetItem(QString(qry.value("foto").toString())) );
            ui->tableWidget1->setItem( row_number,6, new QTableWidgetItem(QString(qry.value("mp3").toString())) );

            ui->tableWidget1->setVisible(true);
            qDebug() << QString::number(qry.value("id").toInt()) << " " << QString(qry.value("titulo").toString()) <<
                    QString(qry.value("artista").toString()) << QString(qry.value("album").toString()) <<
                    QString(qry.value("genero").toString()) << QString(qry.value("foto").toString()) <<
                    QString(qry.value("mp3").toString()) << ".\n";
            row_number++;
        }
        conec.conClose();
    }

}


void Principal::on_btnBuscar_clicked()
{
    MainWindow conec;
    QString titulo;

    titulo = ui->txtTitulo->text();


    if( !conec.conOpen() ){
        QMessageBox::information(this, "Conexión",
                    "Error al abrir la Base de Datos");
        return ;
    }


    conec.conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM cancion WHERE titulo='"+titulo+"'");


    if( qry.exec() ){
        while(qry.next()){
            ui->txtID->setText(qry.value(0).toString());
            ui->txtTitulo->setText(qry.value(1).toString());
            ui->txtArtista->setText(qry.value(2).toString());
            ui->txtAlbum->setText(qry.value(3).toString());
            ui->txtGenero->setText(qry.value(4).toString());
            ui->rutaFoto->setText(qry.value(5).toString());
            ui->rutaMP3->setText(qry.value(6).toString());

        }
    }else{
        QMessageBox::critical(this, "Buscar","No se pudo encontrar la canción");
        qDebug() << "Error: " << qry.lastError() <<"\n";
    }

    //QSqlDatabase::database().commit();
    conec.conClose();
}




