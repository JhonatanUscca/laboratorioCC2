#include <iostream>
using namespace std;
 
 
template <typename T>
 
class Operaciones {
    private:
    T num1;
    T num2;
   
    public:
    Operaciones(T num1_, T num2_);
    Operaciones(){}
    T suma(T,T);
    T resta(T,T);
    T multiplicacion(T,T);
    T division(T,T);
 
};
 
template <typename T>
Operaciones<T>::Operaciones(T num1_, T num2_) {
    num1 = num1_;
    num2 = num2_;
}
 
 
template <typename T>
T Operaciones<T>::suma(T num1_, T num2_) {
    return num1_+num2_;
}
 
 
template <typename T>
T Operaciones<T>::resta(T num1_, T num2_) {
    return num1_-num2_;
}
 
template <typename T>
T Operaciones<T>::multiplicacion(T num1_, T num2_) {
    return num1_*num2_;
}
 
 
template <typename T>
T Operaciones<T>::division(T num1_, T num2_) {
    return num1_/num2_;
}
