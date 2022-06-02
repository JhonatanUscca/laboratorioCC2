#include <iostream>
 
#include "ejercicioN2.h"
using namespace std;
 
int main()
{
    Argumentos <int> Argum1(5, 3);
    Argumentos <float> Argum2(2.5, 3.1);
    cout << "La suma de dos numeros enteros es : " <<  Argum1.suma() << endl;
    cout << "La resta de dos numeros enteros es : " <<  Argum1.resta() << endl;
    cout << "La multiplicacion de dos numeros enteros es : " <<  Argum1.multiplicacion() << endl;
    cout << "La divicion de dos numeros enteros es: " <<  Argum1.divicion() << endl;
    cout << "La suma de dos numeros flotantes es : " <<  Argum2.suma() << endl;
    cout << "La resta de dos numeros flotantes es : " <<  Argum2.resta() << endl;
    cout << "La multiplicacion de dos numeros flotantes es : " <<  Argum2.multiplicacion() << endl;
    cout << "La divicion de dos numeros flotantes es : " <<  Argum2.divicion() << endl;
 
    system("pause");
    return 0;
}
