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
    explicit Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_fileFoto_clicked();

    void on_fileMp3_clicked();

    void on_btnAgregar_clicked();

    void on_btnEliminar_clicked();

    void on_btnActualizar_clicked();

    void on_btnListar_clicked();


private:
    Ui::Principal *ui;

};

#endif // PRINCIPAL_H
