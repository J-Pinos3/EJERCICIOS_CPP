#include <iostream>
#include <iomanip>
#include "MazoDeCartas.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    MazoDeCartas mazodecartas;
    mazodecartas.barajar();

    for (int i = 1; mazodecartas.masCartas(); ++i) {
          // deal and display a Card
        cout << left << setw(19) << mazodecartas.repartirCarta().toString();

        if (i % 4 == 0) { // output newline every 4 cards
        cout << endl;
        }
   }
    return 0;
}
