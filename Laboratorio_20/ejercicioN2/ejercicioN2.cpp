#include <iostream>
#include "ejercicioN2.h"
 
 
using namespace std;
#include <memory>
int main()
{
    unique_ptr<double> d{ new double(0.1) };
    unique_ptr<Point> pt{ new Point(1.0, 2.0)};
   
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->X(4.0);
    pt->Y(4.0);
 
    cout << *d << ", " << "\n";
    cout << (*pt).X(3.0) << ", " <<  (*pt).Y(3.0) << "\n";
    cout << pt->X(3.0) << ", " <<  pt->Y(3.0) << "\n";
    (*pt).print();
    //delete d;
    //delete pt;
}
