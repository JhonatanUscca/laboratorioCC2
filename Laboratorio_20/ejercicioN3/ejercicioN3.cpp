#include <iostream>
using namespace std;
#include <memory>
#include "ejercicioN3.h"
 
int main()
{
    shared_ptr<double> s = make_shared<double>(7.2);
    C2 p(s);
    p.print();
    C1 a(s);
    a.print();
 
}
