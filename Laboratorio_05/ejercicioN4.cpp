#include <iostream>
#include <conio.h>
 
#include <string>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
 
struct Nodo{
    string elemento1;
    Nodo *siguiente;
};
 
 
 
void menu();
void insertarLista1(Nodo *&,string);
void mostarLista(Nodo *);
void BuscarElemento(Nodo *,string);
 
Nodo *lista=NULL;
 
int main(){
    menu();
    return 0;
}
 
void menu(){
 
    int opcion,opcion2;
    string elemento1;
 
    do{
        cout<<"\t__MENU__\n";
        cout<<"1. Insertar lista\n";
        cout<<"2. Mostar lista\n";
        cout<<"3. Buscar elemento\n";
        cout<<"4. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
 
        switch(opcion){
            case 1: cout<<"Ingresar : ";
                    do{      
                        cout<<"\t__MENU__\n";
                        cout<<"1. String \n";
                        cout<<"2. Int\n";
                        cout<<"3. Float\n";
                        cout<<"4. Char\n";
                        cout<<"5. salir\n";
                        cout<<"Opcion: ";
                        cin>>opcion2;
                        switch(opcion2){
                            case 1 :    cout<<"Escriba un elemento del tipo String: ";
                                        cin>>elemento1;                            
                                        insertarLista1(lista,elemento1);
                                        insertarLista1(lista,"string");
                                        cout<<"\n";
                                        break;
                            case 2 :    cout<<"Escriba un elemento del tipo Int: ";
                                        cin>>elemento1;
                                        insertarLista1(lista,elemento1);
                                        insertarLista1(lista,"int");
                                        cout<<"\n";
                                        break;
                            case 3 :    cout<<"Escriba un elemento del tipo Float: ";
                                        cin>>elemento1;
                                        insertarLista1(lista,elemento1);
                                        insertarLista1(lista,"float");
                                        cout<<"\n";
                                        break;
                            case 4 :    cout<<"Escriba un elemento del tipo Char: ";
                                        cin>>elemento1;
                                        insertarLista1(lista,elemento1);
                                        insertarLista1(lista,"char");
                                        cout<<"\n";
                                        break;
                        }                                          
                    }while(opcion2 !=5 );
                    cout<<"\n";
                    break;
            case 2: mostarLista(lista);
                    cout<<"\n";
                   
                    break;
            case 3: cout<<"\nEscriba el elemento que desea buscar ";
                    cin>>elemento1;
                    BuscarElemento(lista,elemento1);
                    cout<<"\n";
                    break;                  
        }
    }while(opcion !=4 );
 
 
}
 
void insertarLista1(Nodo *&lista,string num){
    Nodo*nuevo_nodo=new Nodo();
    nuevo_nodo->elemento1=num;
    Nodo *aux1=lista;
    Nodo *aux2;
 
 
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente= nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;  
}
 
void mostarLista(Nodo *lista){
    Nodo *actual =new Nodo();
    actual = lista;
 
    while(actual !=NULL){
        cout<<actual->elemento1<<" -> ";
        actual = actual->siguiente;
    }
   
}
 
void BuscarElemento(Nodo *lista,string num){
    bool band=false;
    Nodo *actual =new Nodo();
    actual =lista;
    while((actual !=NULL)){
        if(actual->elemento1==num){
            band = true;
        }
        actual = actual->siguiente;
    }
    if(band==true){
        cout<<"Elemento "<<num<<" si a sido encontrado en la lista\n ";
    }
    else{
        cout<<"Elemento "<<num<<" No a sido encontrado en la lista\n ";
    }
 
}
