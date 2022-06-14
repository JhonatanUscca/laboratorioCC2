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
 
        void ingresarElemento(Plista &lista, int valor, int posicion)
        {
            Plista a, b;
            int i;
            a = new(nodo);
            a->numero = valor;
       
            if(posicion==1)
            {
                a->siguiente = lista;
                lista = a;
            }
            else
            {
                int t = -1;
                b = lista;
       
                for(i=1; b!=NULL; i++)
                {
                    if(i==posicion+t)
                    {
                        a->siguiente = b->siguiente;
                        b->siguiente = a;
                        return;
                    }
                    b = b->siguiente;
                }
            }
            cout<<"   Error... no exise esa posicion ..!"<<endl;
        }
 
        void menu1()
        {
            cout << "\n\t\tLISTA ENLAZADA \n\n";
            cout << " 1. INGRESAR AL FINAL " <<endl;
            cout << " 2. INGRESAR AL INICIO "<<endl;
            cout << " 3. INGRESAR EN UNA POSICION  "<<endl;
            cout << " 4. MOSTRAR LISTA " <<endl;
            cout << " 5. SALIR " <<endl;
         
            cout << "\n INGRESE OPCION: ";
        }
        void menu2(){
                Plista lista = NULL;
                int op;    
                int elemenento;  
                int posicion;
           
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
 
                            cout<< "\n NUMERO A INGRESAR: "; cin>> elemenento;
                            ingresarInicio(lista, elemenento);
                        break;
 
                        case 3:
 
                            cout<< "\n NUMERO A INGRESAR: "; cin >> elemenento;
                            cout<< " Posicion : "; cin >> posicion;
                            ingresarElemento(lista, elemenento, posicion);
                            break;
                         
                        case 4:
             
                             cout << "\n\n MOSTRANDO LISTA\n\n";
                             mostrarLista(lista);
                        break;
           
                    }
             
                    cout<<endl<<endl;
                    system("pause");  system("cls");
             
                }while(op!=5);
             
               system("pause");
        }
};
