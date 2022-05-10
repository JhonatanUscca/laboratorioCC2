using namespace std;
#include<iostream>
void suma(int a,int b){
    cout<<"\nla suma es: "<<a+b;
}
void resta(int a,int b){
    cout<<"\nla resta es: "<<a-b;
}
void multiplicar(int a,int b){
    cout<<"\nla multiplicacion es: "<<a*b;
}
void dividir(int a,int b){
    cout<<"\nla division es: "<<a/b;
}
void opeciones(int a,int b,void(*po)(int,int)){
    (*po)(a,b);
}
int main(){
    int a,b;
    a=10;
    b=2;
 
    opeciones(a,b,suma);
    opeciones(a,b,resta);
    opeciones(a,b,multiplicar);
    opeciones(a,b,dividir);
 
}
