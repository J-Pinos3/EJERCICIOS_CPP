#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("127.0.0.1");
    mydb.setUserName("root");
    mydb.setPassword("dBase123");
    mydb.setPort(3306);
    mydb.setDatabaseName("musica");

    if( !mydb.open() ){
        ui->label->setText("No Conectado");
    }else{
        ui->label->setText("Conectado");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    if( ! mydb.isOpen() ){
        QMessageBox::information(this, "Conexión",
                    "Error al abrir la Base de Datos");
        return ;
    }


    QSqlQuery qry;
    if( qry.exec("SELECT * FROM employeeinfo WHERE username ='" +username+
                "' and userpass = '"+password+ "'") ){

        int count = 0;
        while( qry.next() ){
            count++;
        }

        qDebug() << "count: " << count <<"\n";
        if(count == 1){
            ui->label->setText("Usuario y contraseña correctos");
        }

        if(count > 1){
            ui->label->setText("Usuario y contraseña duplicados");
        }

        if(count < 1){
            ui->label->setText("Usuario y contraseña incorrectos");
        }

    }else{
        qDebug() << "Error: " << qry.lastError() <<"\n";
    }
    mydb.close();

}




