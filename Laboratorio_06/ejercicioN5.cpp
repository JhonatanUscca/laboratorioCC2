#include <iostream>
#include <conio.h>
 
#include <time.h>
#include <stdlib.h>
using namespace std;
class matriz{
    private:
        int **Pmatriz;
        int filas,columnas,i,j;
    public:
        matriz();
        ~matriz();
        void ingresar();
        void buscar();
        void mostrar();
 
};
 
matriz::matriz(){  
    filas=3;
    j=0;
    i=0;
    columnas=3;
    Pmatriz=new int*[filas];
    for(int j=0;j<filas;j++){
        Pmatriz[j]=new int [columnas];
    }
}
 
matriz::~matriz(){
    for(j=0;j<filas;j++){
    delete Pmatriz[j];
    delete Pmatriz;
    }              
}
 
void  matriz::ingresar(){
    int num;
    for(i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            Pmatriz[i][j]=num = 1 + rand() % (9 - 1);
        }      
        cout<<endl;
    }  
}
void matriz::buscar(){
    int num;
    int cont=0;
    cout<<"El numero a buscar es : ";
    cin>>num;
    for(i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(num==Pmatriz[i][j]){
                cout<<"\tPOSICION : "<<endl;
                cout<<"Fila : "<<i+1<<" Columna : "<<j+1<<endl;
                cont++;
            }
        }
    }
    if(cont==0){
        cout<<"Este elemento no existe. "<<endl;
    }
    else{
        cout<<"Este elemento si existe. "<<endl;
        cout<<"Hay "<<cont<<" elementos. ";
    }
 
 
}
void matriz::mostrar(){
    cout<<"Se mostrara la matriz : "<<endl;
    for( int i=0;i<filas;i++){
        for( int j=0;j<columnas;j++){
            cout<<Pmatriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
int main(){
    matriz matriz1;
    srand(time(NULL));
    matriz1.ingresar();
    matriz1.mostrar();
    matriz1.buscar();
 
    return 0;
}
