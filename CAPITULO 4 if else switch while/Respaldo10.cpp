#include <iostream>
#include <string.h>

using namespace std;


int main (){
string cadena1, cadena2;
char palabra[]= " ";
string numero, unidad, decena, centena;
char letters[]= "ciento ochenta y seis";
cout <<"Ingrese un número de 3 dígitos (en palabras)"<<endl;
getline(cin, numero);
int l=numero.length();

cout <<endl;
cout <<"numero ----> "<<numero<<endl;
//cout <<"letters ----> "<<letters<<endl;// ☺☻♥
cout <<"Longitud de numero ---> "<<l<<endl;
cout <<"Longitud de letters ---> "<<strlen(letters)<<endl;

int k = numero.find(' '); // cuenta desde 0,1,2,3

cout<<"donde está el primer espacio en numero ----> "<<k<<endl;


cout <<"Parte de la cadena numero  ----> "<<numero[5]<<endl; //da la o porque en ciento  en la posición 5 esta la o (0,1,2,3,4,5)


centena = numero.substr(0,6); // se cuenta 1,2,3,4,,,
cout <<"Centena del numero -->"<<centena<<endl;
//cout <<"SE modifíca numero? ---->"<<numero<<endl; no se midifica se que como el orgininal ingresado por teclado

// PRIMER ERASE
numero.erase(0,k+1);// borro hasta el espacio talque queda la decena
//ciento ochenta y seis ---->ochenta y seis

decena = numero.substr(0,4);
cout <<"LA decena --->"<<decena<<endl;


int u = numero.find(' '); // busca un nuevo espacio ej ochenta_y
cout <<"U-->"<<u <<endl;




/*
cout<<"CORTADO "<<numero.substr(0,k)<<endl;  //en elorigninal es 4 se cuenta 1,2,3,4,,,
//cadena1 = numero.substr(0,k);

cout <<"borrar parte de numero --->"<<numero.erase(0,k)<<endl; // debo poner k+1 para que se borre el espacio---- se cuenta 1,2,3,4,,,
cout <<"como queda numero despues de usar erase---->"<<numero<<endl;

centena = numero.substr(0,4);
cout <<"Centena del numero -->"<<centena<<endl;
*/



    // CENTENAS YA ESTÁ

    if(centena == "ciento"){
      cout << 1;


    }else if (centena == "doscie"){
      cout << 2;


    }else if (centena == "tresci"){
      cout << 3;


    }else if (centena == "cuatro"){
      cout << 4;


    }else if (centena == "quinie"){
      cout << 5;


    }else if (centena == "seisci"){
      cout << 6;


    }else if (centena == "setesc"){
      cout << 7;


    }else if (centena == "ochosc"){
      cout << 8;


    }else if (centena == "novesc"){
      cout << 9;

    } // último if

      centena = numero.substr(0,4);
      if(centena == "cien"){
        cout <<100<<endl;
      }






      // DECENAS YA ESTÁ

      if(decena == "once"){
        cout << 11;

    }

    decena = numero.substr(0,6);
    if (decena == "veinte"){
      cout << 2;
      numero.erase(0,6);
      unidad = numero.substr(0,3);   // unidades

    }else if (decena == "treint"){
      cout << 3;


    }else if (decena == "cuaren"){
      cout << 4;


    }else if (decena == "sesent"){
      cout << 6;


    }else if (decena == "setent"){
      cout << 7;


    }else if (decena == "ochent"){
      cout << 8;


    }else if (decena == "novent"){
      cout << 9;


    }else if (decena == "cincue"){
     cout << 5;

   }else {
     cout <<0; // ese cero sale en numeros como 500 700 100 800 no hay decena
   }





if( u == -1){

}else {
  numero.erase(0,u+3); // segundo erase
//  cout<<"NUMERO erased"<<numero<<endl;
  unidad = numero.substr(0,3);



}

/*
numero.erase(0,u+3);
cout<<"NUMERO erased"<<numero<<endl;
unidad = numero.substr(0,3);
*/



    // UNIDADES

    if(unidad== "uno"){
      cout << 1;

   }else if (unidad == "dos"){
    cout << 2;


    }else if (unidad == "tre"){
    cout << 3;


    }else if (unidad == "cua"){
    cout << 4;


    }else if (unidad == "cin"){
    cout << 5;


    }else if (unidad == "sei"){
    cout << 6;


    }else if (unidad == "sie"){
    cout << 7;


   }else if (unidad == "och"){
    cout << 8;


    }else if (unidad == "nue"){
    cout << 9;

  }else if( (unidad == " " )||(unidad != " ") ){
        cout << 0;
      }// último if  iba al principio








  return 0;
}





/*













*/
