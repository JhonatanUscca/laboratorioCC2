#include <iostream>
using namespace std;
int main(){
    int max=0,min,n;
    cout<<"Numero? ";
    cin>>n;
    int A[n];
    for(int i=1;i<=n;i++){
        cout<<"Numero "<<i<<" : ";
        cin>>A[i];
    }
    min=A[1];

    for(int i=1;i<=n;i++){
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<=min){
            min=A[i]; 
        }
    }
    cout<<"El numero mayor es: "<<max<<"\n"<<"El numero menor es: "<<min;
}