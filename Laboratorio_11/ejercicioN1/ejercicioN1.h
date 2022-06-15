#include <iostream>
#include <stdlib.h>
using namespace std;
 
class nodo{
    public:
       int numero;        
       nodo *siguiente;
       
};
 
typedef class nodo *Plista;
 
 
class lista {
   
    private:
    int contador = 0;
    float tiempo = 0.0;
    public:
        lista (){}  
        ~lista (){}  
        void ingresarFinal(Plista &lista, int valor)
        {
            contador++;
            Plista a, b = new(nodo);
         
            b->numero  = valor;
            b->siguiente = NULL;
         
            if(lista==NULL)
            {
                lista = b;
            }
            else
            {
                a = lista;
                while(a->siguiente!=NULL)
                {
                    a = a->siguiente;
                }
                a->siguiente = b;
            }
         
        }
 
        void mostrarLista(Plista lista)
        {
             int i = 0;
         
             while(lista != NULL)
             {
                  cout <<' '<< i+1 <<") " << lista->numero << endl;
                  lista = lista->siguiente;
                  i++;
             }
        }
 
 
        void menu1()
        {
            cout << "\n\t\tLISTA ENLAZADA \n\n";
            cout << " 1. INGRESAR DATO " <<endl;
            cout << " 2. MOSTRAR LISTA " <<endl;
            cout << " 3. SALIR " <<endl;
         
            cout << "\n INGRESE OPCION: ";
        }
        void menu2(){
                Plista lista = NULL;
                int op;    
                int elemenento;  
                int posicion;
                int cantidad;
                int num;
   
           
                do
                {
                    menu1();  cin>> op;
             
                    switch(op)
                    {
             
                        case 1:
   
                            cout<< "\n NUMERO A INGRESAR: "; cin>> elemenento;
                            ingresarFinal(lista, elemenento );
                           
                        break;
 
                        case 2:
             
                            cout << "\n\n MOSTRANDO LISTA\n\n";
                            mostrarLista(lista);
 
                        break;
           
                    }
             
                    cout<<endl<<endl;
                    system("pause");  system("cls");
             
                }while(op!=3);
             
               system("pause");
        }
};
