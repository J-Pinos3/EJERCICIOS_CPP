#include <iostream>
using namespace std;

class ConvierteTiempo{

    public:
      explicit ConvierteTiempo(int segundos){
         total_Seg = segundos;
         hor = segundos / 3600;
         segundos = segundos % 3600;
         min = segundos / 60;
         seg = segundos % 60;
      }

      void mostrar_Hora(){
        cout <<total_Seg <<" = "<<hor<<" horas, "<<min<<" minutos y "<<seg<<" segundos"<<endl<<endl;
      }

    private:
      int hor, min, seg;
      unsigned long int total_Seg;
};

int main() {
ConvierteTiempo Tiempo1(21778);
ConvierteTiempo Tiempo2(6985);

Tiempo1.mostrar_Hora();
Tiempo2.mostrar_Hora();

  return 0;
}
