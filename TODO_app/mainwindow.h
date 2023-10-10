#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    bool eventFilter(QObject *obj, QEvent *event);

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();
    //void on_listWidget_clicked(const QModelIndex &index);

    void on_ClearButton_clicked();
    void onWindowClosed();

private:
    Ui::MainWindow *ui;
    void AddTaskFromInput();
    void AddSavedTasks();

    void MoveSelectedTask(int offset);
    void SwapTasks(int i, int j);




};
#endif // MAINWINDOW_H
