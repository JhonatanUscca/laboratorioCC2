using namespace std;
#include<iostream>
 
void ingresar(int A[]){
        for(int i=0;i<8;i++){
        cout<<"Numero "<<i+1<<"?";
        cin>>A[i];
    }
}
int Buscar(int A[],int num){
    int aux;
        for(int i=0;i<8;i++){
            aux=A[i];
            if(A[i]==num){
               return i;
            }
        }
    return -1;
}      
int main(){
    int A[8],num;
    ingresar(A);
 
    cout<<"numero que se busca: ";
    cin>>num;
    if(Buscar(A,num)==-1){
        cout<<"El numero a buscar si no existe : falso  ";
    }
    else{
        cout<<"El numero a buscar si existe : veradero ";
    }
}
