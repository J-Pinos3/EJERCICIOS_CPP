#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
cout <<"| Serie de fibonacci |"<<setw(25)<<"| Programacion ATS |"<<endl<<endl;
int n, x = 0, y = 1, z = 1;

cout << "Ingrese el numero de elementos: ";
cin >> n;

cout <<"0 1 ";
for(int i = 1; i < n; i++){
    z = x + y;
    cout << z <<" ";
    x = y;
    y = z;
}


//VUELTA1
// z = x + y -> 0 + 1
// z = 1  en pantalla
// x = y -> 1
// y = z -> 1

//VUELTA2
// z = x + y -> 1 + 1
// z = 2  en pantalla
// x = y -> 1
// y = z -> 2

//VUELTA3
// z = x + y -> 1 + 2
// z = 3  en pantalla
// x = y -> 2
// y = z -> 3



system("pause");
system("cls");


cout <<"| Serie de fibonacci |"<<setw(25)<<"| jotajotavm |"<<endl<<endl;

int num = 1;
int anterior = 0;
int aux;


cout <<"0 ";
for(int i = 0; i < 20; i++){
  cout << num<<" "; // es el numero actual
  aux = num;// almaceno num en aux (provisionalmente)
  num = num + anterior; // el nuevo numero es igual al numero mas el que está antes
  anterior = aux; // anterior es igual al valor aux (num anterior)

}

//Iteración 1
// num = 1 en pantalla (primer numero de la serie)
// aux = num (el primero) = 1
// num = num + anterior = 1 + 0 = 1
// anterior = aux = num (el primero) = 1


//Iteración 2
// num = 1 en pantalla (segundo numero de la serie)
// aux = num (el primero) = 1
// num = num + anterior = 1 + 1 = 2
// anterior = aux = num (el primero) = 1


//Iteración 3
// num = 2 en pantalla (tercer numero de la serie)
// aux = num (el primero) = 2
// num = num + anterior = 2 + 1 = 3
// anterior = aux = num (el primero) = 2


//Iteración 4
// num = 3 en pantalla (cuarto numero de la serie)
// aux = num (el primero) = 3
// num = num + anterior = 3 + 2 = 5
// anterior = aux = num (el primero) = 3


//Iteración 5
// num = 5 en pantalla (tercer numero de la serie)
// aux = num (el primero) = 5
// num = num + anterior = 5 + 3 = 8
// anterior = aux = num (el primero) = 5






    return 0;
}
