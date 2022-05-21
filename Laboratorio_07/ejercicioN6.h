#include <iostream>
 
using namespace std;
 
class Ave{
    protected:
        double peso;
        double altura;
    public:
        Ave(){}
        void setPeso(double p){peso=p;}
        double getPeso(){return peso;}
        void setAltura(double a){altura=a;}
        double getAltura(){return altura;}
        virtual void mostrar();
        ~Ave(){}
};
 
class Ganzo:public Ave{
    public:
        Ganzo(){}
        void mostrar();
        ~Ganzo(){}
};
 
class Pato:public Ave{
    public:
        Pato(){}
        void mostrar();
        ~Pato(){}
};
 
class Gallina:public Ave{
    public:
        Gallina(){}
        void mostrar();
        ~Gallina(){}
 
};
