#include <iostream>
using namespace std;
int main(){
    int a;
    int bin[8];
    cout<<"Numeros entre 100<x<999"<<endl<<"Numero? ";
    cin>>a;
    if(a<100||a>999){
        cout<<"No esta en este rango.";
    }
    else{
        cout<<"El binario del numero escrito es: ";
        for (int i=0;i<8;i++){
            bin[i] = a% 2;
            a /= 2;
        }
        for (int i=7;i>=0;i--){
            cout<<bin[i];
        }
    }
}
