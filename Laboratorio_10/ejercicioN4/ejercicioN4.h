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
 
        void ingresarInicio(Plista &lista, int valor)
        {
            contador++;
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
                contador++;
                a->siguiente = lista;
                lista = a;
            }
            else if (posicion>1&&posicion<=contador)
            {
                contador++;
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
            if(posicion<=0||posicion>contador)
                cout <<"   Error... no exise esa posicion ..!"<<endl;
        }
 
        void eliminarElemento(Plista &lista, int posicion)
        {
           
            Plista Aborrar, anterior;
            Aborrar = lista;
            int i;
       
            if(lista!=NULL)
            {
                contador--;
                 for(i=1; Aborrar!=NULL; i++)
                 {
                    if(i==posicion)
                    {
                        if(Aborrar==lista){
                            lista = lista->siguiente;
                        }
                        else
                        {
                            anterior->siguiente = Aborrar->siguiente;
 
                        }
                        delete(Aborrar);
                        return;
                    }
                    anterior = Aborrar;
                    Aborrar = Aborrar->siguiente;
                 }
                 cout<<"\nSe elimino correctamente el elemento...";
 
            }
            else
                cout <<" Lista vacia..!";
        }
 
        void menu1()
        {
            cout << "\n\t\tLISTA ENLAZADA \n\n";
            cout << " 1. INGRESAR AL FINAL " <<endl;
            cout << " 2. INGRESAR AL INICIO "<<endl;
            cout << " 3. INGRESAR EN UNA POSICION  "<<endl;
            cout << " 4. ELIMINAR EL ULTIMO ELEMENTO  "<<endl;
            cout << " 5. MOSTRAR LISTA " <<endl;
            cout << " 6. SALIR " <<endl;
         
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
 
                            cout<<"\n SE ELIMINARA EL ULTIMO ELEMENTO... ";
                            eliminarElemento(lista, contador);
                           
                            break;
                         
                        case 5:
             
                             cout << "\n\n MOSTRANDO LISTA\n\n";
                             mostrarLista(lista);
                             
                        break;
           
                    }
             
                    cout<<endl<<endl;
                    system("pause");  system("cls");
             
                }while(op!=6);
             
               system("pause");
        }
};
