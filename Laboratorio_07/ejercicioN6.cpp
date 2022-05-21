#include <iostream>
 
using namespace std;
 
#include "ejercicio6.h"
 
void Ave::mostrar(){
    cout<<"Peso: "<<getPeso()<<" kg\n ";
    cout<<"Altura: "<<getAltura()<<" cm\n ";
}
 
void Ganzo::mostrar(){
    cout<<"- Ganzo -\n";
    Ave::mostrar();
}
 
void Pato::mostrar(){  
    cout<<"- Pato -\n";
    Ave::mostrar();
}
 
void Gallina::mostrar(){
    cout<<"- Gallina -\n";
    Ave::mostrar();
}
 
int main(){
    Ganzo Ganzo1;
    Ganzo1.setPeso(3.2);
    Ganzo1.setAltura(57.6);
    Ganzo1.mostrar();
    cout<<endl;
    Pato Pato1;
    Pato1.setPeso(1.5);
    Pato1.setAltura(83.3);
    Pato1.mostrar();
    cout<<endl;
    Gallina Gallina1;
    Gallina1.setPeso(1.9);
    Gallina1.setAltura(39.3);
    Gallina1.mostrar();
    return 0;
}
