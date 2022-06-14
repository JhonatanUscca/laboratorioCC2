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
    public:
        lista (){}  
        ~lista (){}  
        void ingresarFinal(Plista &lista, int valor)
        {
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
 
        void ingresarInicio(Plista &lista, int valor)
        {
            Plista a;
            a = new(nodo);
            a->numero = valor;
            a->siguiente = lista;
            lista  = a;
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
            cout << " 1. INGRESAR AL FINAL " <<endl;
            cout << " 2. INGRESAR AL INICIO "<<endl;
            cout << " 3. MOSTRAR LISTA " <<endl;
            cout << " 4. SALIR " <<endl;
         
            cout << "\n INGRESE OPCION: ";
        }
        void menu2(){
                Plista lista = NULL;
                int op;    
                int elemenento;  
           
                do
                {
                    menu1();  cin>> op;
             
                    switch(op)
                    {
             
                        case 1:
   
                            cout<< "\n NUMERO A INSERTAR: "; cin>> elemenento;
                            ingresarFinal(lista, elemenento );
                        break;
 
                        case 2:
 
                            cout<< "\n NUMERO A INSERTAR: "; cin>> elemenento;
                            ingresarInicio(lista, elemenento);
                        break;
                         
                        case 3:
             
                             cout << "\n\n MOSTRANDO LISTA\n\n";
                             mostrarLista(lista);
                        break;
           
                    }
             
                    cout<<endl<<endl;
                    system("pause");  system("cls");
             
                }while(op!=4);
             
               system("pause");
        }
};
