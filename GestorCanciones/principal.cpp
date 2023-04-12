#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);

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
