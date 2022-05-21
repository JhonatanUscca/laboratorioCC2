//cpp
 
#include<iostream>
using namespace std;
#include "ejercicio2.h"
 
void Objetos::ingresar(){
   cout<<"Objeto deseado? ";
   getline(cin,objeto);
   cout<<"color del objeto? ";
   getline(cin,RGB);
   cout<<"Meterial del objeto? ";
   getline(cin,materiales);
   cout<<endl;
}
 
void Objetos::mostrar(){
   cout<<objeto<<" de color "<<RGB<<" y material " <<materiales<<".";
 
};
 
int main(){
   Objetos objeto1;
   objeto1.ingresar();
   objeto1.mostrar();
 
}
