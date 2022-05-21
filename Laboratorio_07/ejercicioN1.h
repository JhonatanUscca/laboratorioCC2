//clase
 
#include<iostream>
using namespace std;
 
class Persona{
   protected:
       int edad;
       string nombre;
   public:
       Persona(){}
       ~Persona(){}
};
 
class Alumno : public Persona{
   public:
       void ingresar();
       void mostrar();
   public:
       ~Alumno(){}
};
