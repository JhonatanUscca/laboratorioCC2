#include <iostream>
#include "ejercicioN1.h"
using namespace std;

int main()
{
    double* d = new double(1.0);
    Point* pt = new Point(1.0, 2.0);
    *d = 2.0;
    cout << d << endl;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->print();
    pt->X(3.0);
    pt->Y(3.0);
    pt->print();
    delete d;
    delete pt;
}
