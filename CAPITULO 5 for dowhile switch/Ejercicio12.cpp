#include <iostream>
using namespace std;

/*

5.2. Escribir un programa que visualice la siguiente salida:
1
1  2
1  2  3
1  2  3  4
1  2  3
1  2
1

*/
int main(){

int i = 0;
int n ; // en este caso n = 4
cout <<"Ingrese el numero de filas"<<endl;
cin >> n;

    for (int j = 1;j <= n; j++){ // este for cuenta las filas

        for(i = 0; i != j; i++){ // este for imprime los numeros
          cout <<i + 1<<" ";
        }
        cout <<endl;

    }
    cout <<"<.....................>"<<endl;


    for (int j = n-1; j >= 1; j--){
          //cout <<"jota: "<<j<<endl;
        for (int k = 1; k <= j ; k++){
          cout <<k   <<" ";
        }
      cout <<endl;
    }


	/*

	    for(int i = 1; i <= 4; i++){
        	for(int j = 1; j <= i; j++){
            		cout <<j;
        	}
	        cout <<endl;
    	    }

    	    for(int i = 3; i >= 1; i--){
        	for(int j = 1; j<= i; j++){
            	cout <<j;
            	}
	        cout<<endl;
    	    }



	*/


    return 0;
}
