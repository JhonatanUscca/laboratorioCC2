#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include "ejercicioN2.h"
using namespace std;
 
int main()
{
    FIND n1;
    vector<int> letrasIndice = n1(3,10,'e');
    cout << "En el rango de " << 3 << " y " << 10 << " de la Electroencefalografista, se busca la letra " << 'e' << ".Sus indices son:" << endl;
    cout << "Lista de indeces  = | ";
    copy(letrasIndice.begin(), letrasIndice.end(),ostream_iterator<int>(cout," | "));
    cout << endl;
 
   
    system("pause");
    return 0;
}
