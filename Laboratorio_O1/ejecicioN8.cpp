#include <iostream>
using namespace std;
int main(){
 
    int a[10],b=0,c;
    cout<<"Cantidad de numeros? ";
    cin>>c;
    for(int i=0;i<c;i++){
        cout<<"numnero "<<i+1<<" ? ";
        cin>>a[i];
    }
    for(int i=0;i<c;i++){
        cout<<"numnero "<<i+1<<" : "<<a[i];
        cout<<endl;
    }
    return 0;
}
