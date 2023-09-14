#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include <QCheckBox>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::AddTaskFromInput);
    this->setWindowTitle("TODO App");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    AddTaskFromInput();
    ui->lineEdit->setFocus();
}


void MainWindow::AddTaskFromInput(){
    QString descripcion = ui->lineEdit->text();


    if( !descripcion.isEmpty() ){
        QWidget *custom = new QWidget(this);
        QHBoxLayout *layout = new QHBoxLayout(custom);
        QCheckBox* chbx = new QCheckBox("", custom);
        chbx->setCheckable(true);
        chbx->setChecked(true);
        layout->addWidget(chbx);
        QLabel* label = new QLabel(descripcion, custom);
        layout->addWidget(label);
        custom->setLayout(layout);
        custom->setMinimumHeight(60);
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
        ui->listWidget->setItemWidget(item, custom);
        //ui->listWidget->count();
        ui->lineEdit->setText("");
    }
}


