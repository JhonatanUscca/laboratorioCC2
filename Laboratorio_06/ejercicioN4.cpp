#include <iostream>
 
 
using namespace std;
class arreglo{
    private:
        int *Parreglo;
        int  indice,i;
    public:
        arreglo();
        ~arreglo();
        void ingresar(int);
        void retirar(int);
        void mostrar();
        void menu();
 
};
 
arreglo::arreglo(){  
    indice=0;
    i=0;
    Parreglo= new int [indice];
}
 
arreglo::~arreglo(){
    for(i=0;i<indice;i++){
        delete Parreglo;
    }              
}
 
void arreglo::ingresar(int a){
    indice++;
    Parreglo[i]=a;
    i++;
}
 
 
 
void arreglo::retirar(int a){
    int cont=0;
    indice--;
    for(i=0;i<indice;i++){
        if(a==Parreglo[i]){
            Parreglo[i]=Parreglo[i+1];
            cont=1;
        }
    }
    if(cont==0){
        cout<<"No hay existe el dato que se quiere retirar."<<endl;
        indice++;
    }
}
 
 
void arreglo::mostrar(){
    cout<<"Se mostrara la matriz : "<<endl;
    for(int i=0;i<indice;i++){
        cout<<Parreglo[i]<<" ";
    }
}
 
 
void arreglo::menu(){
    int Opcion,datoI,datoS;
    do{
        cout<<"\n\t.:MENU:.\n";
        cout<<"Lista de 5 elementos \n";
        cout<<"1.insertar un elemento al array\n";
        cout<<"2.Sacar un elemento del array\n";
        cout<<"3.Imprimir el array\n";
        cout<<"4.Terminar\n";
        cout<<"Opcion:\n";
        cin>>Opcion;
        switch(Opcion){
 
            case 1: if(indice<5){
                        cout<<"\nDigite el numero: ";
                        cin>>datoI;
                        ingresar(datoI);
                        cout<<"Quedan "<<5-indice<<" espacios ";
                    }
                    else{
                        cout<<"No se pude ingresar mas datos."<<endl;
                    }
                    break;
            case 2: if(indice>0){
                    cout<<"\nDigite el numero a sacar: ";
                    cin>>datoS;
                    retirar(datoS);
                    cout<<"Quedan "<<5-indice<<" espacios ";
                    }
                    else{
                        cout<<" No hay datos disponible para retirar. "<<endl;
                    }
                    break;
            case 3: cout<<"\nImprimir array : \n";
                    mostrar();
                    break;
        }
    }
    while(Opcion!=4);
 
}
 
 
int main(){
    arreglo arreglo1;
    arreglo1.menu();
    return 0;
}
