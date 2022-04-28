#include <iostream>
using namespace std;
int main(){
    int cont=0;
    for(int i=1;i<=50;i++){
        if(i==2||i==3||i==5||i==7){
            cout<<i<<" ";
            cont+=1;
        }
        if(i!=1){
            if(i%2==0||i%3==0||i%5==0||i%7==0){
            }
            else{
                cout<<i<<" ";
                cont+=1;
            }
        }
    }
    cout<<endl;
    cout<<"Del 1 al 50 hay "<<cont<<" primos.";
}