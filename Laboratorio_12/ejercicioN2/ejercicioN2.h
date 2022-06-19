#include <iostream>
 
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
        void ingresarCola(Plista &lista, int valor)
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
 
        void eliminarElemento(Plista &lista, int posicion)
        {
           
            Plista Aborrar, anterior;
            Aborrar = lista;
            int i;
       
            if(lista!=NULL)
            {
               
                if (posicion>0&&posicion<=contador){
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
                else{
                    cout<<"\nNo se elimino correctamente el elemento, la posicion no exite ...";
                }
 
            }
            else
                cout <<" Lista vacia..!";
        }
 
 
 
        void menu1()
        {
            cout << "\n\t\tLISTA ENLAZADA \n\n";
            cout << " 1. INGRESAR ELEMENTO " <<endl;
            cout << " 2. ELIMINAR EL PRIMER ELEMENTO "<<endl;
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
 
                            cout<< "\n NUMERO A INGRESAR: "; cin>> elemenento;
                            ingresarCola(lista, elemenento);
                           
                        break;
                       
                        case 2:
 
                            cout<<"\n SE ELIMINARA EL PRIMER ELEMENTO... ";
                            eliminarElemento(lista, 1);
                           
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
