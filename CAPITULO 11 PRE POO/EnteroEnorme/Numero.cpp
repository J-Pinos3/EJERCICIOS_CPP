#include <iostream>
#include "EnteroEnorme.h"
using namespace std;


int main(int argc, char const *argv[])
{
    EnteroEnorme n1{7654321};
    EnteroEnorme n2{"100000000000000"};
    EnteroEnorme n3;
    EnteroEnorme n4{5};
    EnteroEnorme n5;
    
    n5 = n1 + n2;
    cout << n1.toString() << " + " << n2.toString() << " = " << n5.toString() << "\n\n";


    n5 = n2 - n4;
    cout << n2.toString() << " - " << n4.toString() << " = " << n5.toString() << "\n\n";

    if (n2.esIgual(n2)) { 
      cout << n2.toString() << " is equal to " << n2.toString() << "\n\n"; 
   } 

   // checks for inequality between n1 and n2
   if (n1.noEsIgual(n2)) {
      cout << n1.toString() << " is not equal to " << n2.toString() << "\n\n";
   } 

   // tests for greater number between n2 and n1 
   if (n2.esMayor(n1)) {
      cout << n2.toString() << " is greater than " << n1.toString() << "\n\n";
   } 

   // tests for smaller number between n4 and n2
   if (n4.esMenor(n2)) {
      cout << n4.toString() << " is less than " << n2.toString() << "\n\n";
   } 
    
   // tests for smaller or equal number between n4 and n4
   if (n4.esMenoroIgual(n4)) {
      cout << n4.toString() << " is less than or equal to " << n4.toString() << "\n\n";
   } 

   // tests for smaller or equal number between n4 and n2
   if (n4.esMenoroIgual(n2)) {
      cout << n4.toString() << " is less than or equal to " << n2.toString() << "\n\n";
   } 

   // tests for greater or equal number between n3 and n3
   if (n3.esMayoroIgual(n3)) { 
      cout << n3.toString() << " is greater than or equal to " << n3.toString() << "\n\n";
   } 
    
   // tests for greater or equal number between n2 and n3
   if (n2.esMayoroIgual(n3)) {
      cout << n2.toString() << " is greater than or equal to " << n3.toString() << "\n\n";
   } 
    
   // tests for zero at n3
   if (n3.esCero()) {
      cout << "n3 contains " << n3.toString() << "\n";  
   } 
}
