#include <iostream>
using namespace std;

int main(){
    char a[20],c[20];
    string b;
    cout<<"Primer nombre? ";
    cin>>a;
    cout<<"Apellido paterno? ";
    cin>>b;
    cout<<"Apellido materno? ";
    cin>>c;
    cout<<"Resultado, correo UNSA: "<<a[0]<<b<<c[0]<<".edu.pe ";
    return 0;

}