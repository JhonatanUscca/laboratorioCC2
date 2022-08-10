#include <iostream>
#include <vector>
#include <iterator>
#include "ejercicioN1.h"
using namespace std;
 
 
int main()
{
    vector<double> x, y, relt;
    RegresionLineal lne;
    relt = lne(x,y);
    cout << "regresión lineal simple (y = a + bc)" << endl;
    cout << "Resultado: de a es " << relt[0] << " y de b es " << relt[1] << endl;
   system("pause");
    return 0;
}
