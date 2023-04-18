#ifndef REPRODUCTOR_H
#define REPRODUCTOR_H

#include <QDialog>
#include "mainwindow.h" //para la conexión
#include <QPixmap>
#include <QTableWidgetItem>

namespace Ui {
class Reproductor;
}

class Reproductor : public QDialog
{
    Q_OBJECT

public:
    void ListarCanciones();

public:
    explicit Reproductor(QWidget *parent = nullptr);
    ~Reproductor();

private:
    Ui::Reproductor *ui;
};

#endif // REPRODUCTOR_H
