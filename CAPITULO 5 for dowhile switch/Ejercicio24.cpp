#include <iostream>
#include <cstdlib>
#include <climits>
#include <string>
#include <iomanip>
using namespace std;


int main (){
string linnea(40, '_'); // AQUÍ NO SE USA =


  int seed;
  //unsigned int seed;
  int z1, z2, z3;
  cout << " --- Random Numbers --- \n" << endl;

  cout << "To initialize the random number generator, "
  << "\n please enter an integer value: ";

  cin >> seed; // Input an integer
  srand( seed); // and use it as argument for a
  // new sequence of random numbers.

  z1 = rand(); // Compute three random numbers.
  z2 = rand();
  z3 = rand();
  cout << "\nThree random numbers: "
  << z1 << " " << z2 << " " << z3 << endl;

system("pause");
system("cls");
// llamar a la función rand() sin antes llamar a srand()
//hace que siempre se generen los mismo valores

cout <<linnea<<endl;
srand(2);
for (int  i = 1; i <= 10; i++){
cout <<"valor aleatorio: "<<rand()<<endl;

}


// sizeof() == length()


system("pause");
system("cls");


cout<<showpos<<125<<endl;
cout<<showpos<<31<<endl;
cout<<showpos<<0<<endl;
cout<<showpos<<-18<<endl;


cout.setf( ios::showpos);
cout << 189;
cout <<endl;
cout.unsetf( ios::showpos);
cout << 189;

//pag 83



system("pause");
system("cls");

cout <<showpoint<<1.0<<endl;
cout <<noshowpoint<<1.0035900<<endl;



double x = 12.0;
cout.precision(15); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;


system("pause");
system("cls");

//cout.width(30);

cout<<setw(30)<<"width: "<<100<<endl;
//SE MUESTRA                width:10
cout<<setw(30)<<setfill('x')<<"width: "<<100<<endl;
//SE MUESTRAxxxxxxxxxxxxxxxxwidth:10
cout<<setfill('x')<<setw(30)<<"width: "<<100<<endl;
//SE MUESTRAxxxxxxxxxxxxxxxxwidth:10



    return 0;
}
