#include <iostream>
 
using namespace std;
 
template <class T>
class Argumentos {
    private:
        T x;
        T y;
        T z;
    public:
        Argumentos(T x = 0, T y = 0,T z = 0);
        T getX() {
        return x;
        }
        T getY() {
        return y;
        }
        T getZ() {
        return z;
        }
        ~Argumentos(){}
        T mayor(){
            if (x>z && x>y){
                return x;
            } else if (y>z && y>x){
                return y;
            } else {
                return z;
            }
        }
        T menor(){
            if (x<z && x<y){
                return x;
            } else if (y<z && y<x){
                return y;
            } else {
                return z;
            }
        }
       
};
 
template <class T>
 
Argumentos<T>::Argumentos(T x, T y, T z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
