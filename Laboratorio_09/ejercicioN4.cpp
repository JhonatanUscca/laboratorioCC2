#include <iostream>
 
 
using namespace std;
template <class T>
void ingresar(T A[10]){
    for(int i=0; i<5; i++){
        cout << "Numero? ";
        cin>>A[i];
    }
    cout << endl;
}
 
template <class T>
void imprimir(T A[10]){
    for(int i=0; i<5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
   
}
template <class T>
T mayor(T A[10], T b){
 
    for(int i=0; i<5; i++){
        if(b<A[i]){
            b=A[i];
        }
 
    }
    return b;
}
template <class T>
T menor(T A[10], T b){
 
    for(int i=0; i<5; i++){
        if(b>A[i]){
            b=A[i];
        }
 
    }
    return b;
}
 
int main(){
    int lista1[10];
    cout << "\t.:Enteros:.\n";
    ingresar(lista1);
    imprimir(lista1);
    cout << "El numero mayor de una lista de enteros es : " << mayor(lista1, lista1[0]) << endl;
    cout << "El numero menor de una lista de enteros es : " << menor(lista1, lista1[0]) << endl;
    float lista2[10];
    cout << "\t.:Flotantes:.\n";
    ingresar(lista2);
    imprimir(lista2);
    cout << "El numero mayor de una lista de flotantes es : " << mayor(lista2, lista2[0]) << endl;
    cout << "El numero menor de una lista de flotantes es : " << menor(lista2, lista2[0]) << endl;
 
    system("pause");
    return 0;
 
 
}
