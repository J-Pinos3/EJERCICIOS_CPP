#include <iostream>
#include <cstring>

using namespace std;


void reverse(char str[], char umstr[]);

int main(){


    

    const int CNT{81};
    char word[CNT], rev_word[CNT];

    cout <<"Hola José"<<endl;

    cout <<"Ingrese una palabra: ";
    cin.width(CNT);//maximo CNT - 1 caracteres
    cin >> word;

    reverse(word, rev_word);
    cout <<"\nLa palabra original es: " << word
        <<"." << endl <<"La palabra en reversa es: " << rev_word<<endl;
}


void reverse(char str[], char umstr[]){

    int j = 0;
    for(int i = strlen(str)-1; i >= 0; i--, j++){
        umstr[j] = str[i];
    }
    umstr[j]= '\0';//caracter final
}