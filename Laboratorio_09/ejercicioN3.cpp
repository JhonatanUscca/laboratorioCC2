#include <iostream>
 
using namespace std;
 
template <class T, class P>
 
void ingresar(T A[5],P B[5]){
    for(int i=0; i<5; i++){
        cout << i+1 << ".Letras? ";
        cin >> A[i];
        cout << i+1 <<".Palabras? ";
        cin >> B[i];
    }
    cout << endl;
}
 
template <class T, class P>
 
void mostrar(T A[5], P B[5]){
    for(int i=0; i<5; i++){
        cout << A[i] << B[i] << "@unsa.edu.pe" <<endl;
 
    }
    cout << endl;
 
}
 
int main(){
    char A[5];
    string B[5];
    cout << "\t.:ingresar Datos :.\n";
 
    ingresar(A,B);
 
    cout << "\t.:Mostar:.\n";
   
    mostrar(A,B);
 
    system("pause");
    return 0;
 
}
