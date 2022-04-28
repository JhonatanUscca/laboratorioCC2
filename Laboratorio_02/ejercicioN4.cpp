#include <iostream>
using namespace std;
bool primo(int num){
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x,y,a,b;
    int cont=0;
    bool l=false;
    do{
        cout<<"Numeros : "<<endl;
        cout<<"Numero1? ";
        cin>>x;
        cout<<"Numero2? ";
        cin>>y;
    }
    while(x>y);
    for(int i=x;i<=y;i++){
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
    if(cont==0){
        a=x;
        b=y;
        while(l==false){
            a-=1;
            b+=1;
            if(primo(a)==1){
               cout<<"El numero primo mas cercano "<<x<<" es "<<a;
               l=true;
            }
            if(primo(b)==1){
                cout<<"El numero primo mas cercano "<<y<<" es "<<b;
                l=true;
            }
        }
    }
    else{
        cout<<endl;
        cout<<"Del "<<x<<" al "<<y<<" hay "<<cont<<" primos.";
    }
}