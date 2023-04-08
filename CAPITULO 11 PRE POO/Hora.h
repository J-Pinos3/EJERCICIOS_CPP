#ifndef HORA_H
#define HORA_H


class Hora{

private:

  int horas;
  int minutos;
  int segundos;


public:

    Hora();
    Hora(int horas, int minutos, int segundos);
    void visualizarHora();
    Hora sumarHoras(Hora h2);
    void setHoras(int horas);
    void setMinutos(int minutos);
    void setSegundos(int segundos);

};










#endif 
