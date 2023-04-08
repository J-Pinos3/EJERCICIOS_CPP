#include <iostream>
using namespace std;

const int MAX = 80;
int length_arr(char *str);
void reverse(char *str, char *umstr);


int main(int argc, char const *argv[])
{
    char palabra[MAX], revertida[MAX];    
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    reverse(palabra, revertida);

    cout <<palabra << "\t\t" << revertida << endl;

    return 0;
}


int length_arr(char *str){
    char *p = nullptr;
    for(p = str; *p != '\0'; p++){

    }
    return (p-str);
}

void reverse(char *str, char *umstr){
    int j = 0;
    for(int i = length_arr(str)-1; i >= 0; i--,j++ ){
        umstr[j] = str[i];
    }
    umstr[j] = '\0';
}