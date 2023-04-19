#ifndef REPRODUCTOR_H
#define REPRODUCTOR_H

#include <QDialog>
#include "mainwindow.h" //para la conexión
#include <QPixmap>
#include <QTableWidgetItem>

namespace Ui {
class Reproductor;
}

class QMediaPlayer;
class QAudioOutput;

class Reproductor : public QDialog
{
    Q_OBJECT

public:
    void ListarCanciones();

public:
    explicit Reproductor(QWidget *parent = nullptr);
    ~Reproductor();

private slots:


    void on_tblSongs_cellActivated(int row, int column);

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_btnMute_clicked();

    void on_volumen_valueChanged(int value);

private:
    Ui::Reproductor *ui;
    QMediaPlayer *mMediaPlayer;
    QAudioOutput *audiooutput;
};

#endif // REPRODUCTOR_H
