#include <iostream>
 
using namespace std;
 
 
class Forma{
    protected:
        string color;
        int coordenada1,coordenada2;
        string nombreForma;
    public:
        Forma(){}
        Forma(string cl,int x,int y,string n){color=cl;coordenada1=x;coordenada2=y;nombreForma=n;}
        void setColor(string cl){color=cl;}
        string getColor(){return color;}
        void setCoordenada1(int x){coordenada1=x;}
        int getCoordenada1(){return coordenada1;}
        void setCoordenada2(int y){coordenada2=y;}
        int getCoordenada2(){return coordenada2;}
        void setNombreForma(string n){nombreForma=n;}
        string getNombreForma(){return nombreForma;}
        virtual void imprimir();
        virtual double calcularArea(){}
        void obtenerCambiarColor();
        void moverForma();
        ~Forma(){}
};
 
class Rectangulo:public Forma{
    protected:
        double ladoMayor;
        double ladoMenor;
    public:
        Rectangulo(){}
        Rectangulo(string cl,int x,int y,string n,double lma,double lme):Forma(cl,x,y,n){ladoMayor=lma;ladoMenor=lme;}
        void setLadoMayor(double lma){ladoMayor=lma;}
        double getLadoMayor(){return ladoMayor;}
        void setLadoMenor(double lme){ladoMenor=lme;}
        double getLadoMenor(){return ladoMenor;}
        void imprimir();
        double calcularArea();
        double calcularPerimetro();
        void cambiarTamanoRectangulo();
        ~Rectangulo(){}
};
 
class Elipse:public Forma{
    protected:
        double radioMayor;
        double radioMenor;
    public:
        Elipse(){}
        Elipse(string cl,int x,int y,string n,double rma,double rme):Forma(cl,x,y,n){radioMayor=rma;radioMenor=rme;}
        void setRadioMayor(double rma){radioMayor=rma;}
        double getRadioMayor(){return radioMayor;}
        void setRadioMenor(double rme){radioMenor=rme;}
        double getRadioMenor(){return radioMenor;}
        double calcularArea();
        void cambiarTamanoElipse();
        void imprimir();
        ~Elipse(){}
};
 
 
class Circulo:public Elipse{
    public:
        Circulo(){}
        Circulo(string cl,int x,int y,string n,double rma,double rme):Elipse(cl,x,y,n,rma,rme){}
        double calcularArea();
        void imprimir();
        ~Circulo(){}
};
 
class Cuadrado:public Rectangulo{
    public:
        Cuadrado(){}
        Cuadrado(string cl,int x,int y,string n,double lma,double lme):Rectangulo(cl,x,y,n,lma,lme){}
        double calcularArea();
        void imprimir();
        ~Cuadrado(){}
};
