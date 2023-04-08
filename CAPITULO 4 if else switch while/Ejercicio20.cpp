#include <iomanip>
#include <iostream>
using namespace std;

int main (){
/*
int x;
double contador = 0.0, total = 0.0;

cout <<"Porfavor ingrese un número entero (cualquier letra para salir)"<<endl;

while(cin >> x){
  contador++ ;
 total = total + x;

}

cout <<"Promedio ---> "<<total/contador<<endl;
*/


// EuroDoll.cpp
// Outputs a table of exchange: Euro and US-$


long euro, maxEuro; // Amount in Euros INT
double rate; // Exchange rate Euro <-> $
cout << "\n* * * TABLE OF EXCHANGE "
<< " Euro – US-$ * * *\n\n";
cout << "\nPlease give the rate of exchange: "
" one Euro in US-$: ";
cin >> rate;
cout << "\nPlease enter the maximum euro: ";
cin >> maxEuro;
// --- Outputs the table ---
// Titles of columns:
cout << '\n'
<< setw(12) << "Euro" << setw(20) << "US-$"
<< "\t\tRate: " << rate << endl;
// Formatting US-$:
cout << fixed << setprecision(2) << endl;
long lower, upper, // Lower and upper limit INT
step; // Step width INT
// The outer loop determines the actual
// lower limit and the step width:
for( lower=1, step=1; lower <= maxEuro;
step*= 10, lower = 2*step)
// The inner loop outputs a "block":
for( euro = lower, upper = step*10;
euro <= upper && euro <= maxEuro; euro+=step)
cout << setw(12) << euro
<< setw(20) << euro*rate << endl;




    return 0;
}
