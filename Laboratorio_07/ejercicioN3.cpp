#include <iostream>
using namespace std;
#include "ejercicio3.h"
 
 
void ProductoBancario::imprimir(){
    cout<<"Nombre del criente : "<<cliente<<" \n";
    cout<<"Saldo solicitado : "<<saldo<<" \n";
    cout<<"Numero de Productos : "<<numProductos<<" \n";
}
 
void Cuenta::imprimir(){
    cout<<"\t.:Cuenta:.\n";
    ProductoBancario::imprimir();
}
 
Cuenta::Cuenta(string a,double b,int c) : ProductoBancario::ProductoBancario(a,b,c){}
 
void Prestamo::imprimir(){
    cout<<"\t.:Prestamo:.\n";
    ProductoBancario::imprimir();
}
 
Prestamo::Prestamo(string a,double b,int c) : ProductoBancario::ProductoBancario(a,b,c){}
 
void CuentaJoven::imprimir(){
    cout<<"- Cuenta Joven -\n";
    Cuenta::imprimir();
}
 
CuentaJoven::CuentaJoven(string a,double b,int c) : Cuenta::Cuenta(a,b,c){}
 
void Hipoteca::imprimir(){
    cout<<"- Hipoteca -\n";
    Prestamo::imprimir();
}
 
Hipoteca::Hipoteca(string a,double b,int c) : Prestamo::Prestamo(a,b,c){}
 
int main(){
    //El programa no pude acceder a estos elememtos porque son privados(CuentaJoven).
    /*
    CuentaJoven CuentaJoven1("Luis",1212.21,14);
    CuentaJoven1.imprimir();
    */
 
    //El programa pude acceder a estos elememtos porque son publicos(Hipoteca).
   
    Hipoteca Hipoteca1("Luis",1212.21,14);
    Hipoteca1.imprimir();
   
    return 0;
 
}
