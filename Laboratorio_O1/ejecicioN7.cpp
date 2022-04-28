#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Numero 1? ";
    cin>>a;
    cout<<"Numero 2? ";
    cin>>b;
    if(a%b==0){
        cout<<"Resultado:  es divisor";
    }
    else{
        cout<<"Resultado:  no es divisor";
    }
}
