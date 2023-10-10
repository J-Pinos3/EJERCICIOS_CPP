#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include <QCheckBox>
#include <string>
#include <QKeyEvent>
#include <QMessageBox>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::AddTaskFromInput);
    connect(this, &QObject::destroyed, this, &MainWindow::onWindowClosed );
    ui->listWidget->setEnabled(true);
    ui->listWidget->installEventFilter(this);
    //event filter para sabr si presionan las teclas arriba o abajo
    //ui->listWidget->installEventFilter(this);

    this->setWindowTitle("TODO App");
    AddSavedTasks();
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

void MainWindow::AddSavedTasks()
{
    std::vector<Task> tasks = loadTasksFromFile("TaskList.txt");

    for(const Task& task : tasks){

        QWidget *custom = new QWidget(this);
        QHBoxLayout *layout = new QHBoxLayout(custom);
        QCheckBox* chbx = new QCheckBox("", custom);

        chbx->setChecked( task.getDone() );
        layout->addWidget(chbx);
        QLabel* label = new QLabel( QString::fromUtf8( task.getDescription().c_str() )  , custom);
        layout->addWidget(label);
        custom->setLayout(layout);
        custom->setMinimumHeight(custom->height() + 4);
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget);
        ui->listWidget->setItemWidget(item, custom);
    }
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event){
    if( obj == ui->listWidget && event->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent *>(event);
        if(ke->key() == Qt::Key_Backspace || ke->key() == Qt::Key_Delete){
            qDebug() << "Que estas borrando?\n";
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
        } else if (ke->key() == Qt::Key_Up){
            qDebug() << "Tecla arriba presionada\n";
            MoveSelectedTask(-1);
            return true;
        } else if (ke->key() == Qt::Key_Down){
            qDebug() << "Tecla abajo presionada\n";
            MoveSelectedTask(1);
            return true;
        }
    }

    return QMainWindow::eventFilter(obj, event);
}


/*
void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    int indice = index.row();
    qDebug() << "selected row: " << indice << "\n";
}
*/


void MainWindow::MoveSelectedTask(int offset){
    int selectedIndex = ui->listWidget->currentRow();

    int newIndex = selectedIndex + offset;
    qDebug() << "selected index: " << selectedIndex << "  "
             << "new index: " << newIndex << "\n";
    if(newIndex >= 0 && newIndex < ui->listWidget->count() ){
        SwapTasks(selectedIndex, newIndex);
        ui->listWidget->setCurrentRow(newIndex, QItemSelectionModel::Current);

    }
}


void MainWindow::SwapTasks(int i, int j){
    //Task taskI{}
    //int indSelected = ui->listWidget->currentRow();
    QListWidgetItem *selected = ui->listWidget->item(i);
    QListWidgetItem *selected2 = ui->listWidget->item(j);

    QWidget *customWidget = nullptr, *custom2 = nullptr;
    QCheckBox *chbx = nullptr, *chbx2 = nullptr;
    QLabel *lbl = nullptr, *lbl2 = nullptr;

    std::string desc = "", desc2="";
    bool isChecked = false, ischeck2 = false;

    Task taskI("", false);
    Task taskII("", false);

    if(selected){
        customWidget = ui->listWidget->itemWidget(selected);

        if(customWidget){
            chbx = customWidget->findChild<QCheckBox *>();
            lbl = customWidget->findChild<QLabel *>();

            if(chbx && lbl){
                isChecked = chbx->isChecked();
                desc = lbl->text().toStdString();

                taskI.setDescription(desc);
                taskI.setDone(isChecked);
            }
        }
    }

    if(selected2){
        custom2  = ui->listWidget->itemWidget(selected2);
        if(custom2){
            chbx2 = custom2->findChild<QCheckBox *>();
            lbl2 = custom2->findChild<QLabel *>();
        }

        if(chbx2 && lbl2){
            ischeck2 = chbx2->isChecked();
            desc2 = lbl2->text().toStdString();

            taskII.setDescription(desc2);
            taskII.setDone(ischeck2);
        }
    }

    //al item de la fila i, le ponemos el item de la fila j
    if(selected){
        customWidget = ui->listWidget->itemWidget(selected);
        if(customWidget){
            chbx = customWidget->findChild<QCheckBox *>();
            lbl = customWidget->findChild<QLabel *>();
            if(chbx && lbl){
                chbx->setChecked(taskII.getDone());
                lbl->setText( QString::fromUtf8(taskII.getDescription().c_str()) );
            }
        }
    }

    //al item de la fila j, le ponemos el item de la fila i
    if(selected2){
        custom2  = ui->listWidget->itemWidget(selected2);
        if(custom2){
            chbx2 = custom2->findChild<QCheckBox *>();
            lbl2 = custom2->findChild<QLabel *>();
        }

        if(chbx2 && lbl2){
            chbx2->setChecked( taskI.getDone());
            lbl2->setText( QString::fromUtf8( taskI.getDescription().c_str() ) );

        }
    }


}


void MainWindow::on_ClearButton_clicked()
{
    if( ui->listWidget->count() == 0 ){
        return ;
    }


    QMessageBox::StandardButton res = QMessageBox::information(this, tr("Clear"),
                 tr("Are you sure you want to clear all tasks?"),
                 QMessageBox::Yes,
                 QMessageBox::No
                 );

    switch(res){
        case QMessageBox::Yes:{
            ui->listWidget->clear();
        }
        break;


        case QMessageBox::No:{

        }
        break;

        default:{
            qDebug() << "Whatcha doing here negro!!\n";
        }
        break;
    }


}


void MainWindow::onWindowClosed()
{
    std::vector<Task> tasks;
    QListWidgetItem *currentItem = nullptr;
    QWidget *customWidget = nullptr;

    QCheckBox *chbx = nullptr;
    QLabel *lbl = nullptr;

    Task myTask("", false);

    for(int i = 0; i < ui->listWidget->count(); i++ ){
        currentItem = ui->listWidget->item(i);
        customWidget = ui->listWidget->itemWidget(currentItem);
        chbx = customWidget->findChild<QCheckBox *>();
        lbl = customWidget->findChild<QLabel *>();

        myTask.setDescription( lbl->text().toStdString() );
        myTask.setDone( chbx->isChecked() );

        tasks.push_back(myTask);
    }
    //MINUTO 44:36
    saveTasksToFile(tasks, "TaskList.txt");
}

