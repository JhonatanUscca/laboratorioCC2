using namespace std;
#include<iostream>
#include <stdio.h>
#include <string>
int main(){
    string A[3][4],nombre,apellido,Edad,DNI;
    for(int i=0;i<3;i++){
        cout<<"Nombre ? "<<endl;
        getline(cin,nombre);
        cout<<"apellido? "<<endl;
        getline(cin,apellido);
        cout<<"Edad? "<<endl;
        getline(cin,Edad);
        cout<<"DNI? "<<endl;
        getline(cin,DNI);
        A[i][0]=nombre;
        A[i][1]=apellido;
        A[i][2]=Edad;
        A[i][3]=DNI;      
    }
    for(int i=0;i<3;i++){    
            cout<<"nombre "<<i+1<<" : "<<A[i][0]<<endl;
            cout<<"apellido "<<i+1<<" : "<<A[i][1]<<endl;
            cout<<"Edad "<<i+1<<" : "<<A[i][2]<<endl;
            cout<<"DNI "<<i+1<<" : "<<A[i][3]<<endl;
    }  
}
