#include <iostream>
using namespace std;
#include <memor>
#include "ejercicioN5.h"
int main()
{
 
    shared_ptr<double> s = make_shared<double>(5.7);
    shared_ptr<C2> d(new C2(s));
    d->print();
    weak_ptr<C2> f = d;
    ///f->print();
    shared_ptr<C1> a = make_shared<C1>(s);
    a->print();
    weak_ptr<C1> h = a;
    //h->print();
 
   
}
