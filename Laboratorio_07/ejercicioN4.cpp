#include <iostream>
 
using namespace std;
 
#include "ejercicio4.h"
void Disco::mostrar(){
    cout<<"\t.:Disco:.\n";
    cout<<"Capacidad del Disco: "<<getCapacidadDisco()<<"GB\n";
}
 
void Multimedia::mostrar(){
    Disco::mostrar();
    cout<<"- "<<getMultimedia()<<" - \n";
    cout<<"El peso es: "<<getPesoMultimedia()<<"GB\n";
    cout<<"-----------------------------------------\n";
    cout<<"Espacio restante: "<<datosRestates()<<"GB\n";
}
 
int main(){
    Multimedia Multimedia1;
    Multimedia1.setCapacidadDisco(931.232);
    Multimedia1.setMultimedia("VIDEO");
    Multimedia1.setPesoMultimedia(23.21);
    Multimedia1.mostrar();
    return 0;
 
}
