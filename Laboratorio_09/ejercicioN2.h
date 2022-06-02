#include <iostream>
 
using namespace std;
 
template <class T>
class Argumentos {
    private:
        T x;
        T y;
    public:
        Argumentos(T x = 0, T y = 0);
        T getX() {
        return x;
        }
        T getY() {
        return y;
        }
        ~Argumentos(){}
        T suma(){return x+y;}
        T resta(){return x-y;}
        T multiplicacion(){return x*y;}
        T divicion(){return x/y;}
           
};
 
template <class T>
 
Argumentos<T>::Argumentos(T x, T y) {
    this->x = x;
    this->y = y;
}
