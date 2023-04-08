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


centena = numero.substr(0,4); // se cuenta 1,2,3,4,,,
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





    // CENTENAS

    if(centena == "cien"){
      cout << 1;


    }else if (centena == "dosc"){
      cout << 2;


    }else if (centena == "tres"){
      cout << 3;


    }else if (centena == "cuat"){
      cout << 4;


    }else if (centena == "quin"){
      cout << 5;


    }else if (centena == "seis"){
      cout << 6;


    }else if (centena == "sete"){
      cout << 7;


    }else if (centena == "ocho"){
      cout << 8;


    }else if (centena == "nove"){
      cout << 9;

    } // último if


/*
    if(u == -1){
      cout<<0;
    }
*/


      // DECENAS

      if(decena == "once"){
        cout << 1;

    }else if (decena == "vein"){
      cout << 2;
      numero.erase(0,6);
      unidad = numero.substr(0,3);   // unidades

    }else if (decena == "trei"){
      cout << 3;


    }else if (decena == "cuar"){
      cout << 4;


    }else if (decena == "sese"){
      cout << 6;


    }else if (decena == "sete"){
      cout << 7;


    }else if (decena == "oche"){
      cout << 8;


    }else if (decena == "nove"){
      cout << 9;


    }
    decena = numero.substr(0,5);
    if (decena == "cinco"){
     cout << 5;


   }else if( (decena == " ")||(decena != " ") ){ // IF DE LAS DECENAS
          cout << 0;
            decena = numero.substr(0,3);
          if(decena== "uno"){
            cout << 1;

         }else if (decena == "dos"){
          cout << 2;


        }else if (decena == "tre"){
          cout << 3;


        }else if (decena == "cua"){
          cout << 4;


        }else if (decena == "cin"){
          cout << 5;


        }else if (decena == "sei"){
          cout << 6;


        }else if (decena == "sie"){
          cout << 7;


        }else if (decena == "och"){
          cout << 8;


        }else if (decena == "nue"){
          cout << 9;

        }


        } // último if este iba al principip ESTE ES EL IF DE DECENAS




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
