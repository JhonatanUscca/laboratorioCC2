#include <cmath>
#include <iostream>
 
using namespace std;
 
#include "laboratorio8.h"
 
 
//Forma
 
void Forma::imprimir(){
    cout<<"Su color es : "<<getColor()<<"\n";
    cout<<"Sus coordenadas son : ("<<getCoordenada1()<<" ; "<<getCoordenada2()<<")\n";
    cout<<"Nombre de la forma : "<<getNombreForma()<<"\n";
}
 
void Forma::obtenerCambiarColor(){
    string a;
    cout<<"Escriba el nuevo color \n";
    cout<<"Color? ";getline(cin,a);setColor(a);
    cout<<"El color se cambio .... \n";
 
}
 
void Forma::moverForma(){
    int a,b;
    cout<<"Escriba la nueva coordenada \n";
    cout<<"coordenada 1? ";cin>>a;setCoordenada1(a);
    cout<<"coordenada 2? ";cin>>b;setCoordenada2(b);
    cout<<"Las coordenadas ya han sido modificadas .....\n";
}
////////////////////////
//Rectangulo
 
void Rectangulo::imprimir(){
    Forma::imprimir();
    cout<<"Su lado mayor es : "<<getLadoMayor()<<"u \n";
    cout<<"Su lado menor es : "<<getLadoMenor()<<"u \n";
    cout<<"Su area es : "<<calcularArea()<<"u^2 \n";
    cout<<"Su perimetro es : "<<calcularPerimetro()<<"u \n";
}
 
void Rectangulo::cambiarTamanoRectangulo(){
    double a;
    cout<<"si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5 se reducirá a la mitad.\n";
    cout<<"El factor es : ";cin>>a;
    setLadoMayor(getLadoMayor()*a);
    setLadoMenor(getLadoMenor()*a);
    cout<<"El rectangulo cambio su tamano ..... \n";
}
 
double Rectangulo::calcularArea(){
    return getLadoMayor()*getLadoMenor();
}
 
double Rectangulo::calcularPerimetro(){
    return (2*getLadoMayor())+(2*getLadoMenor());
}
 
//////////////////////////////
//Elipse
void Elipse::imprimir(){
    Forma::imprimir();
    cout<<"Su radio mayor es : "<<getRadioMayor()<<"u \n";
    cout<<"Su radio menor es : "<<getRadioMenor()<<"u \n";
    cout<<"Su area es : "<<calcularArea()<<"u^2 \n";
}
 
void Elipse::cambiarTamanoElipse(){
    double a;
    cout<<"si el factor vale 2, el elipse duplicará su tamaño y si es 0,5 se reducirá a la mitad.\n";
    cout<<"El factor es : ";cin>>a;
    setRadioMayor(getRadioMayor()*a);
    setRadioMenor(getRadioMenor()*a);
    cout<<"El elipse cambio su tamano ..... \n";  
}
 
double Elipse::calcularArea(){
    return getRadioMayor()*getRadioMenor()*M_PI;
}
 
///////////////////////////////
 
//Circulo
 
void Circulo::imprimir(){
    Forma::imprimir();
    cout<<"Su radio es : "<<getRadioMayor()<<"u \n";
    cout<<"Su area es : "<<calcularArea()<<"u^2 \n";
}
 
double Circulo::calcularArea(){
    return  Elipse::calcularArea();
 
}
 
////////////////////////////////
//Cuadrado
 
void Cuadrado::imprimir(){
    Forma::imprimir();
    cout<<"Su lado es : "<<getLadoMayor()<<"u \n";
    cout<<"Su area es : "<<calcularArea()<<"u^2 \n";
}
 
double Cuadrado::calcularArea(){
    return Rectangulo::calcularArea();
}
 
///////////////////////////////
 
 
int main(){
    int cont=0;
    string nombreForma_;
    int coordenada1_=1;
    int coordenada2_=1;
    string color_="Azul";
    double num1;
    double num2;
    Forma *forma[20];
 
    do{
        cout<<"Escribe el mombre de la forma : ";cin>>nombreForma_;
        if(nombreForma_=="Rectangulo"){
            cout<<"Lado mayor? ";cin>>num1;
            cout<<"Lado menor? ";cin>>num2;
            forma[cont]=new Rectangulo(color_,coordenada1_,coordenada2_,nombreForma_,num1,num2);
            cont++;
        }
        else if(nombreForma_=="Elipse"){
            cout<<"Radio mayor? ";cin>>num1,
            cout<<"Radio menor? ";cin>>num2;
            forma[cont]=new Elipse(color_,coordenada1_,coordenada2_,nombreForma_,num1,num2);
            cont++;
        }
        else if(nombreForma_=="Cuadrado"){
            cout<<"Lado? ";cin>>num1;
            forma[cont]=new Cuadrado(color_,coordenada1_,coordenada2_,nombreForma_,num1,num1);
            cont++;
        }
        else if(nombreForma_=="Circulo"){
            cout<<"Radio? ";cin>>num1;
            forma[cont]=new Circulo(color_,coordenada1_,coordenada2_,nombreForma_,num1,num1);
            cont++;
        }
 
    }while(cont!=4);
    for(int i=0; i<cont; i++){
        forma[i]->imprimir();
        cout<<endl;
    }
    double aux=0;
    int indice;
    for(int i=0; i<cont; i++){
        if(aux<forma[i]->calcularArea()){
            aux=forma[i]->calcularArea();
            indice=i;
        }
    }
    cout<<"La forma con mas area es "<<forma[indice]->getNombreForma()<<", con el area "<<aux<<"u^2.";
 
    return 0;
}
