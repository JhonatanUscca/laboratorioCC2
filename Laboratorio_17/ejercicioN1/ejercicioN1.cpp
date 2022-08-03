#include <iostream>
using namespace std;
 
#include "ejercicioN1.h"
int main()
{
 
    Operaciones<int> numeros1;
    Operaciones<double> numeros2;
    Operaciones<float> numeros3;
 
    cout << "Resultado con int: " << numeros1.suma(3,3) << endl;
 
    cout << "Resultado con double: " << numeros2.resta(232.32323,332.3232) << endl;
 
    cout << "Resultado con float: " << numeros3.multiplicacion(1.2,1.33) << endl;
 
 
    return 0;
 
}
