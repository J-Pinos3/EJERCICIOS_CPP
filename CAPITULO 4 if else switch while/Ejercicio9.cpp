#include <iostream>
using namespace std;

int main (){
int a, b, c;
string mes;

cout <<"Ingrese el día: ";
cin >> a;
cout <<endl;
cout <<"Ingrese el mes: ";
cin >>mes;
cin.ignore();
cout <<endl;
cout <<"Ingrese el año: ";
cin >>c;



/*
cout<<"DÍA: "<<a<<endl;
cout<<"MES: "<<mes<<endl;
cout<<"AÑO: "<<c<<endl;
*/


      if( (mes == "enero")||(mes == "Enero") ){
  cout <<a<<" "<<" 01 "<<" "<<c<<endl;

}else if( (mes == "febrero")||(mes == "Febrero") ){
  cout <<a<<" "<<" 02 "<<" "<<c<<endl;

}else if( (mes == "marzo")||(mes == "Marzo") ){
        cout <<a<<" "<<" 03 "<<" "<<c<<endl;

}else if( (mes == "abril")||(mes == "Abril") ){
        cout <<a<<" "<<" 04 "<<" "<<c<<endl;

}else if( (mes == "mayo")||(mes == "Mayo") ){
        cout <<a<<" "<<" 05 "<<" "<<c<<endl;

}else if( (mes == "junio")||(mes == "Junio") ){
        cout <<a<<" "<<" 06 "<<" "<<c<<endl;

}else if( (mes == "julio")||(mes == "Julio") ){
        cout <<a<<" "<<" 07 "<<" "<<c<<endl;

}else if( (mes == "agosto")||(mes == "Agosto") ){
        cout <<a<<" "<<" 08 "<<" "<<c<<endl;

}else if( (mes == "septiembre")||(mes == "Septiembre") ){
        cout <<a<<" "<<" 09 "<<" "<<c<<endl;

}else if( (mes == "octubre")||(mes == "Octubre") ){
        cout <<a<<" "<<10<<" "<<c<<endl;

}else if( (mes == "noviembre")||(mes == "Noviembre") ){
        cout <<a<<" "<<11<<" "<<c<<endl;

}else if( (mes == "diciembre")||(mes == "Diciembre") ){
        cout <<a<<" "<<12<<" "<<c<<endl;

}




  return 0;
}
