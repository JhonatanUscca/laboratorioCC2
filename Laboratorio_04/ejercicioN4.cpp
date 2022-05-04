using namespace std;
#include<iostream>
int main(){
    int cont=0;
    int A[100];
    for(int i=1;i<=100;i++){
        if(i==2||i==3||i==5||i==7){
            A[cont]=i;
            cont+=1;
        }
        if(i!=1){
            if(i%2==0||i%3==0||i%5==0||i%7==0){
            }
            else{
                A[cont]=i;
                cont+=1;
            }
        }
    }
    for(int i=cont-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
}
