//1
 
#include<iostream>
using namespace std;
#include "ejercicio1.h"
 
void Alumno::ingresar(){
   cout<<"Edad del alumno? ";cin>>edad;
   cin.ignore();
   cout<<"Nombre del alumno? ";getline(cin,nombre);
}
 
void Alumno::mostrar(){
   cout<<"Edad? "<<edad<<endl<<"Nombre? "<<nombre<<endl;
}
 
 
int main(){
 
   Alumno nuevo;
   nuevo.ingresar();
   nuevo.mostrar();
 
   return 0;
}
