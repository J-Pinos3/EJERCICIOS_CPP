#include <iostream>
using namespace std;
#include "Hora.h"

int main(int argc, char const *argv[]) {

  Hora h1;
  h1.visualizarHora();
  Hora h2(14,50,7);
  h2.visualizarHora();

  h1.setHoras(3);
  h1.setMinutos(15);
  h1.setSegundos(48);
  h1.visualizarHora();

  return 0;
}
