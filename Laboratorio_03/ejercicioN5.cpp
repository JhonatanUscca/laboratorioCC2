#include <iostream>
using namespace std;
bool par(int x){
    if(x%2==0){
        return true;
    }
    else{
        return false;
    }
}
 
int sumar(int x){
    int sum=0;
    for(int i=0;i<=x;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    return sum;
}
 
 
int main(){
 
    int a;
    cout<<"Numero? ";
    cin>>a;
   
    cout<<"\nnumero par : "<<par(a);
    cout<<"\nsumar: "<<sumar(a);  
}
