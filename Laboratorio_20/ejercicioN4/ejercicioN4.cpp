#include <iostream>
using namespace std;
#include <memory>
#include "ejercicioN4.h"
int main()
{
 
    shared_ptr<double> s = make_shared<double>(2.3);
    shared_ptr<C2> d(new C2(s));
    d->print();
    shared_ptr<C2> f = d;
    f->print();
    shared_ptr<C1> a = make_shared<C1>(s);
    a->print();
    shared_ptr<C1> h = a;
    h->print();
 
}
