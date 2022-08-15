#include <iostream>
using namespace std;
#include <memory>
 
class C1
{
private:
    std::shared_ptr<double> d;
public:
    C1(std::shared_ptr<double> value) : d(value) {}
    virtual ~C1() { cout << "\nC1 destructor\n"; }
    void print() const { cout << "Valor " << *d << endl; }
};
 
 
class C2
{
private:
    std::shared_ptr<double> d;
public:
    C2(std::shared_ptr<double> value) : d(value) {}
    virtual ~C2() { cout << "\nC2 destructor\n"; }
    void print() const { cout << "Valor " << *d << endl; }
};
