#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include <QCheckBox>
#include <QKeyEvent>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::AddTaskFromInput);
    ui->listWidget->installEventFilter(this);
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
        chbx->setChecked(false);
        layout->addWidget(chbx);
        QLabel* label = new QLabel(descripcion, custom);
        layout->addWidget(label);
        custom->setLayout(layout);
        custom->setMinimumHeight(custom->height() + 4);
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
        ui->listWidget->setItemWidget(item, custom);
        //ui->listWidget->count();
        ui->lineEdit->setText("");
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event){
    if( obj == ui->listWidget && event->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent *>(event);
        if(ke->key() == Qt::Key_Backspace || ke->key() == Qt::Key_Delete){
            //qDebug() << "Que estas borrando?\n";
            //QModelIndexList indexes = ui->listWidget->selectionModel()->selectedIndexes();
            QList<QListWidgetItem*> selectedItems = ui->listWidget->selectedItems();

            foreach(QListWidgetItem *item, selectedItems){
                int row = ui->listWidget->row(item);
                delete ui->listWidget->takeItem(row);
            }


            /*
            std::vector<int> indexList;
            foreach (QModelIndex index, indexes) {

                indexList.push_back(index.row());
            }
            for(int k: indexList){
                qDebug() << "--> " << k << "\n";    SE IMPRIME EL ÍNDICE DEL ELEMENTO SELECCIONADO
            }
            */
            return true;
        }
    }

    return QMainWindow::eventFilter(obj, event);
}



void MainWindow::MoveSelectedTask(int offset){


}


void MainWindow::SwapTasks(int i, int j){


}


