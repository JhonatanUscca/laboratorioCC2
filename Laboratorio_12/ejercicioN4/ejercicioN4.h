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
 
        void repetir(Plista &lista, int cantidad)
        {
            for(int i=1; i<=cantidad; i++)
            {
                int num;
                cout << "Edad de la persona? " ; cin >> num;
                ingresarCola(lista,num);
            }
 
        }
 
        void comparar()
        {
            Plista a = NULL;
            Plista b = NULL;
            int cantidad;
            int numPer1;
            int numPer2;
            string persona;
 
            cout  << "\t\n\n.:Lista de hombres:.\n ";
            cout  << "Cantidad de personas: "; cin >> numPer1;
 
            repetir(a,numPer1);
            mostrarLista(a);
 
            cout  << "\t\n\n.:Lista de Mujeres:.\n ";
            cout  << "Cantidad de personas: "; cin >> numPer2;
            repetir(b,numPer2);
            mostrarLista(b);
 
            cout << "\n\nCantidad de iterciones ? "; cin >> cantidad;
            cout << "Resultado: "; cout << endl;
       
 
            for(int i=1; i<=cantidad; i++)
            {
                if(a->numero > b->numero)
                {
                   
                    persona = "hombre";
                } else
                if(a->numero < b->numero)
                {
     
                    persona = "mujer";
                } else {
 
                    persona = "nadie";
                }
 
                    //ingresar el elemento de la cola
                    ingresarCola(a,a->numero);
                    ingresarCola(b,b->numero);
 
                    //eliminar los elementos de la cola
                    eliminarElemento(a,1);
                    eliminarElemento(b,1);
 
               
            }
 
            if(persona == "hombre")
            {
                cout << "El mayor en la iteracion " << cantidad << " es el hombre." << endl;
            } else if(persona == "mujer") {
                cout << "El mayor en la iteracion " << cantidad << " es la mujer." << endl;
            } else {
                cout << "El mayor en la iteracion " << cantidad << " no es nadie." << endl;
            }
 
        }
 
 
};
