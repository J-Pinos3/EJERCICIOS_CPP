#include <iostream>
#include <string>
using namespace std ;
// -- Constantes -------
const unsigned SEGMIN = 60 ;
const unsigned MINHOR = 60 ;
const unsigned MAXHOR = 24 ;
const unsigned SEGHOR = SEGMIN * MINHOR ;
// -- Tipos ------------
struct Tiempo {
unsigned horas ;
unsigned minutos ;
unsigned segundos ;
} ;

// -- Subalgoritmos ----
unsigned leer_rango (unsigned inf, unsigned sup)
{
  unsigned num ;
  do {
    cin >> num ;
  } while ( ! ((num >= inf) && (num < sup))) ;

  return num ;
}

void leer_tiempo (Tiempo& t)
{
  t.horas = leer_rango(0, MAXHOR) ;
  t.minutos = leer_rango(0, MINHOR) ;
  t.segundos = leer_rango(0, SEGMIN) ;
}

void escribir_tiempo (const Tiempo& t)
{
cout << t.horas << ":" << t.minutos << ":" << t.segundos ;
}

unsigned tiempo_a_seg (const Tiempo& t)
{
return (t.horas * SEGHOR) + (t.minutos * SEGMIN) + (t.segundos) ;
}
void seg_a_tiempo (unsigned sg, Tiempo& t)
{
t.horas = sg / SEGHOR ;
t.minutos = (sg % SEGHOR) / SEGMIN ;
t.segundos = (sg % SEGHOR) % SEGMIN ;
}
void diferencia (const Tiempo& t1, const Tiempo& t2, Tiempo& dif)
{
seg_a_tiempo(tiempo_a_seg(t2) - tiempo_a_seg(t1), dif) ;
}
// -- Principal --------
int main ()
{
Tiempo t1, t2, dif ;
leer_tiempo(t1) ;
leer_tiempo(t2) ;
diferencia(t1, t2, dif) ;
escribir_tiempo(dif) ;
cout << endl ;
}
