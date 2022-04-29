#include <iostream>
using namespace std;
int main(){
 
    int a1,a2,m1,m2,d1,d2;
    cout<<"Fecha actual: ";
    cout<<"\nAn-o alctual? ";
    cin>>a1;
    cout<<"\nMes alctual? ";
    cin>>m1;
    cout<<"\nDia alctual? ";
    cin>>d1;
    cout<<"\nFecha de tu de nacimiento: ";
    cout<<"An-o? ";
    cin>>a2;
    cout<<"Mes? ";
    cin>>m2;
    cout<<"Dia? ";
    cin>>d2;
    cout<<"\nEdad actual: ";
    cout<<"\nAn-o: "<<a_no(a1,a2);
    cout<<"\nMes: "<<mes(m1,m2,d1,d2);
    cout<<"\nDia: "<<dia(d1,d2);
 
}
