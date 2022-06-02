#include <iostream>
 

using namespace std;
template <class T>
void ingresar(T A[10], int num, int num2){
    for(int i=num2+1; i<=num; i++){
        cout << "Numero? ";
        cin>>A[i];
    }
    cout << endl;
}
 
template <class T>
void imprimir(T A[10], int num, int num2){
    for(int i=num2+1; i<=num; i++){
        cout << A[i] << " ";
    }
    cout << endl;
   
}
 
template <class T>
void ordenarAscendente(T A[10], int num, int num2){
    T a;
    for(int i=num; i>=num2; i--){
        for(int j=num2; j<=i; j++){
            if(A[j] > A[j+1]){
                a = A[j];
                A[j] = A[j+1];
                A[j+1] = a;
           
            }
        }
    }
    cout << endl;
}
 
template <class T>
void ordenarDescendente(T A[10], int num, int num2){
    T b;
    for(int i=num; i>=num2; i--){
        for(int j=num2; j<=i; j++){
            if(A[j] < A[j+1]){
                b = A[j];
                A[j] = A[j+1];
                A[j+1] = b;
           
            }
        }
    }
    cout << endl;
}
 
 
 
int main(){
    int lista1[10];
    cout << "\t.:Enteros:.\n";
    cout << "LISTA\n";
    ingresar(lista1,5,0);
    imprimir(lista1,5,0);
    cout << "ORDENAR ASCEDENTEMENTE\n";
    ordenarAscendente(lista1,5,0);
    imprimir(lista1,5,0);
    cout << "ORDENAR DESCENDENTEMENTE\n";
    ordenarDescendente(lista1,5,0);
    imprimir(lista1,5,0);
 
    float lista2[10];
    cout << "\t.:Flotantes:.\n";
    cout << "LISTA\n";
    ingresar(lista2,5,0);
    imprimir(lista2,5,0);
    cout << "ORDENAR ASCEDENTEMENTE\n";
    ordenarAscendente(lista2,5,0);
    imprimir(lista2,5,0);
    cout << "ORDENAR DESCENDENTEMENTE\n";
    ordenarDescendente(lista2,5,0);
    imprimir(lista2,5,0);
 
 
    system("pause");
    return 0;
 
}
