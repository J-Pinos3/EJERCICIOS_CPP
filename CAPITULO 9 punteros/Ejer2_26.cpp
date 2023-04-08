/*
10.10. Escribir una función que tenga como entrada una cadena y devuelva un número real.
La cadena contiene los caracteres de un número real en formato decimal 
(por ejemplo, la cadena “25.56” se ha de convertir en el correspondiente valor real).
*/

#include <cstdlib>
#include <iostream>

#include <cstring>

using namespace std;


float Cadena_A_Numero (char * CadenaReal){
    char *PunteroCad;
    int potencia = 1, SignoNumero;
    float NumeroReal = 0;
    // saltar espacios en blanco iniciales 
    for (PunteroCad = CadenaReal; *PunteroCad == ' '; PunteroCad++);
    switch (*PunteroCad) //decidir el Signo del número 
    {
    case '-': SignoNumero = -1; PunteroCad++; break;
    case '+': PunteroCad++;
    default : SignoNumero = +1;
    }
    // Cálculo de la parte entera del número 
    NumeroReal = *PunteroCad - '0'; // convierte el dígito en decimal
    // mientras el siguiente caracter sea un digito
    while (*++PunteroCad >='0' && *PunteroCad <= '9') 
    NumeroReal = NumeroReal * 10 + *PunteroCad - '0';
    //añadir a parte entera la decimal del número
    if ( *PunteroCad++ != '.' )
    return (SignoNumero * NumeroReal); // sólo parte entera
    else // tratamiento de parte decimal
    {
    while ((*PunteroCad >='0') && (*PunteroCad <= '9'))
    { 
    potencia *= 10;
    NumeroReal += (float)(*PunteroCad++ - '0') / potencia;
    }
    return (SignoNumero * NumeroReal);
    } 
}
int main(int argc, char *argv[]){ 
    char cadena[40];
    cout << " conversion de cadenas de real a float\n";
    do
    { cout << " Introduzca real : ";
    cin.getline(cadena,40); 
    if (strlen(cadena)>0)
    cout << " Convertido a numero real--> ";
    cout << Cadena_A_Numero(cadena) << endl;
    } 
    while (strlen(cadena)>0);
    system("PAUSE");
    return EXIT_SUCCESS;
}