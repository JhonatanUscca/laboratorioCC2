#include <iostream>
using namespace std;
int main(){
    int n;
    float max=0,min;
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
    cout<<"El numero mayor es: "<<max<<"\n"<<"El numero menor es: "<<min<<"\n"<<" y la media es : "<<(min+max)/2;
}