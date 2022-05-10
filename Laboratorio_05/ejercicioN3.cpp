#include <iostream>
#include <conio.h>
 
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
struct Nodo{
    int elemento;
    Nodo *siguiente;
};
 
void menu();
void insertarLista(Nodo *&,int);
void mostarLista(Nodo *);
void eliminarElememto(Nodo *&,int);
 
 
 
Nodo *lista=NULL;
 
int main(){
    srand(time(NULL));
    menu();
    return 0;
}
 
void menu(){
    int opcion,elemento;
 
    do{
        cout<<"\t__MENU__\n";
        cout<<"1. Insertar lista\n";
        cout<<"2. Mostar lista\n";
        cout<<"3. Eliminar un elemento de la lista\n";
        cout<<"4. Insertar 10000 elemetos a la lista\n";
        cout<<"5. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
 
        switch(opcion){
            case 1: cout<<"Escriba un numero: ";
                    cin>>elemento;
                    insertarLista(lista,elemento);
                    cout<<"\n";
                   
                    break;
            case 2: mostarLista(lista);
                    cout<<"\n";
                   
                    break;
            case 3: cout<<"\nEscriba el elemento que desea eliminar ";
                    cin>>elemento;
                    eliminarElememto(lista,elemento);
                    cout<<endl;
                    break;
            case 4: cout<<"\nSe incertaron los 10000 numeros aleatorios  ";
                    for(int i=1; i<=10000; i++){
                            int num;
                            num = 1 + rand() % (10001 - 1);
                            insertarLista(lista,num);                        
                    }
                    cout<<endl;
                    break;                  
        }
    }while(opcion !=5 );
 
 
}
 
void insertarLista(Nodo *&lista,int num){
    Nodo*nuevo_nodo=new Nodo();
    nuevo_nodo->elemento=num;
    Nodo *aux1=lista;
    Nodo *aux2;
 
    while((aux1 != NULL) && (aux1->elemento < num)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
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
        cout<<actual->elemento<<" -> ";
        actual = actual->siguiente;
    }
}
void eliminarElememto(Nodo *&lista,int num){
    if(lista != NULL){
        Nodo *borrar;
        Nodo *anterior = NULL;
   
        borrar =lista;
 
        while((borrar != NULL) && (borrar->elemento != num)){
            anterior =borrar;
            borrar =borrar->siguiente;
        }
        if(borrar == NULL){
            cout<<"elemento no ha sio encontrado ";
        }
        else if(anterior == NULL){
            lista = lista->siguiente;
            delete borrar;
        }
        else{
            anterior->siguiente = borrar->siguiente;
            delete borrar;
        }
    }
}
