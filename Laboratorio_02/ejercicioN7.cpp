#include <iostream>
using namespace std;
int main(){
    int n,suma=0;
    float b,a;
    cout<<"Numero ? ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<"Nota "<<i+1<<" : ";
            cin>>a;
            suma=suma+a;
        }
        b=suma/3;
        cout<<"Resultado: "<<b<<endl;
        suma=0;
    }
    return 0;
}