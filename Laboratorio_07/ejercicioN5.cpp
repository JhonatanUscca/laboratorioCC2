#include <iostream>
 
using namespace std;
 
#include "ejercicio5.h"
 
int operacionFactorial::devolverFactorial(){
    int cont=1;
    for(int i=1; i<=getOperacion(); i++){
        cont*=i;
    }
    return cont;
}
 
int main(){
    operacionFactorial operacionFactorial1;
    operacionFactorial1.setOperacion(6);
    cout<<"el factorial es : "<<operacionFactorial1.devolverFactorial();
    return 0;
}
