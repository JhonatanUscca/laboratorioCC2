#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <iterator>
#include <random>
 
#include "ejercicioN3.h"
int main()
{
    Elementos el1;
    vector<int> a,b;
    vector<int> resultado = el1(a,b);
    cout << "Resultado de desigualdad de obj1.a < obj2.b. Se mostrar un lista con los elementos mayores de la comparacion." << endl;
    cout << "Lista de indeces  = | ";
    copy( resultado.begin(), resultado.end(),ostream_iterator<int>(cout," | "));
    cout << endl;
 
   
    system("pause");
    return 0;
}
