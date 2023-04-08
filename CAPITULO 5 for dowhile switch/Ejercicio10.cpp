#include <iostream>
#include <cstdlib>

using namespace std;


int main(){

//5.1
  for(int cuenta = 1; cuenta < 5; cuenta++){
    cout <<2*cuenta<<" ";
  }
  cout<<endl;
  system("pause");
  system("cls");


//5.2
  for(int n = 10; n > 0; n = n - 2 ){
    cout <<"Hola ";
    cout <<n<<endl;
  }
  cout<<endl;
  system("pause");
  system("cls");


//5.3
int i = 1, n;
cin >> n; // 0 1 3

  while(i <= n){
      if( (i % n) == 0){
        i++;
      }
    cout <<i<<endl;
  }
  cout<<endl;
  system("pause");
  system("cls");


/*
//5.4
int m = 3, n = 5;
cout <<"a) "<<endl;
    for(int i = 0; i < n; i++){
          for(int j = 0; j < i; j++){
            cout <<" *";
           }
           cout <<endl;

     }
cout<<endl<<endl;
cout <<"b) "<<endl;
      for(int i = n; i > 0; i--){
            for(int j = m; j > 0; j--){
                cout <<" *";
            }
            cout <<endl;

      }
*/













    return 0;
}
