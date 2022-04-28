#include <iostream>
using namespace std;
int main(){
    int a[10],b=0;
 
    for(int i=0;i<10;i++){
        cout<<"numnero "<<i+1<<" ? ";
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if(a[i]<0){
            b=b+1;
        }
    }  
    cout<<"Numeros negativos: "<<b;
    return 0;
}
