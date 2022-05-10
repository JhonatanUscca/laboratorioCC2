using namespace std;
#include<iostream>
#include <stdlib.h>
#include <time.h>
void llenar(float *v, int n)
{
    cout<<"Llenando el vector ...\n";
    for(int i=0;i<n;i++)
        *(v+i)=-10 + rand() % (10- -10);//numeros aleatorios desde 10 hasta -10.
}
void print(float *v,int n)
{
    cout<<"Imprimiendo el vector ...\n";
    for(int i=0;i<n;i++)
        cout<<*(v+i)<<" ";
    cout<<endl;
}
void crear(float *&v, int n)
{
    v=new float[n];
}
void borrar(float *v, int n)
{
    delete v;
}
void productoPunto(float *v1,float *v2, int n){
    float cont=0;
 
    cout<<"el producto Punto es ...\n";
    for(int i=0;i<n;i++){
       cont=cont+(v1[i] * v2[i]);
    }
    cout<<"Resultado "<<cont;
}
int main()
{
    float *v1, *v2;
    srand(time(NULL));
    for(int i=0;i<2;i++){ //en esta linea se pone las 1 000 000 veces.
        crear(v1,2);crear(v2,2);
        llenar(v1,2);llenar(v2,2);
        print(v1,2); print(v2,2);
        productoPunto(v1,v2,2);
        borrar(v1,2); borrar(v2,2);
        cout<<"\n****************************************\n";
    }
}
