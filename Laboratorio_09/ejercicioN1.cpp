#include <iostream>
 
#include "ejercicioN1.h"
using namespace std;
 
 
 
int main()
{
    Argumentos <int> Argum1(6, 4, 7);
    Argumentos <float> Argum2(3.5, 5.5, 3.1);
    cout << "El numero mayor de numeros enteros es : " <<  Argum1.mayor() << endl;
    cout << "El numero mayor de numeros enteros es : " <<  Argum1.menor() << endl;
    cout << "El numero mayor de numeros flotantes es : " <<  Argum2.mayor() << endl;
    cout << "El numero mayor de numeros flotantes es : " <<  Argum2.menor() << endl;
 
 
    system("pause");
    return 0;
}
