#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Principal;
}

class Principal : public QDialog
{
    Q_OBJECT

public:
    MainWindow manw;
    explicit Principal(QWidget *parent = nullptr);
    ~Principal();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
