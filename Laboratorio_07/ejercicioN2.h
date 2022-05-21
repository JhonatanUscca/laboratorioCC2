//clases
 
 
#include<iostream>
using namespace std;
 
class Color{
   protected:
       string RGB;
   public:
       Color(){}
       ~Color(){}  
};
 
class Material{
   protected:
       string materiales;
   public:
       Material(){}
       ~Material(){}
 
};
 
class Objetos:public Color,Material{
   private:
       string objeto;
   public:
       Objetos(){}
       ~Objetos(){}
       void ingresar();
       void mostrar();
};
