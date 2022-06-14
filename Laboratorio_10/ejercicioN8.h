#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
 
#include <random>
 
 
 
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
 
 
        void random(Plista &lista, int cantidad, int numMax)
        {
            int num, c;
            clock_t t;
            t=clock();
            random_device rd;  
            mt19937 gen(rd());
            uniform_int_distribution<> dist(1,numMax);
            for(c = 1; c <= cantidad; c++)
            {
                num = dist(gen);
                ingresarFinal(lista, num);
            }
            t=clock()-t;
            cout<<"\nSe ingreso los numeros correctamente...";
            cout<<"\nTiempo usado: "<<float(t)/CLOCKS_PER_SEC<<" segundos.";
            tiempo=tiempo+float(t)/CLOCKS_PER_SEC;
        }
 
        void ordenarAscendente(Plista &lista)
        {
            Plista a = lista;
            Plista aux = NULL;
            int num;
            clock_t t;
            t=clock();
            while(a->siguiente != NULL){
                aux = a->siguiente;
                while( aux != NULL ){
                    if( a->numero > aux->numero ){
                        num = aux->numero;
                        aux->numero= a->numero;
                        a->numero = num;
                    }
                    aux =aux->siguiente;
                }
                a = a-> siguiente;
            }
            t=clock()-t;
            cout<<"\nTiempo usado: "<<float(t)/CLOCKS_PER_SEC<<" segundos.";
            tiempo=tiempo+float(t)/CLOCKS_PER_SEC;
            cout<<"\nTiempo total usado: "<<tiempo<<" segundos.";
 
 
        }
 
        void ordenarDescendente(Plista &lista)
        {
            Plista a = lista;
            Plista aux = NULL;
            int num;
            clock_t t;
            t=clock();
            while(a->siguiente != NULL){
                aux = a->siguiente;
                while( aux != NULL ){
                    if( a->numero < aux->numero ){
                        num = aux->numero;
                        aux->numero= a->numero;
                        a->numero = num;
                    }
                    aux =aux->siguiente;
                }
                a = a-> siguiente;
            }
            t=clock()-t;
            cout<<"\nTiempo usado: "<<float(t)/CLOCKS_PER_SEC<<" segundos.";
            tiempo=tiempo+float(t)/CLOCKS_PER_SEC;
            cout<<"\nTiempo total usado: "<<tiempo<<" segundos.";
 
 
        }
 
        void menu1()
        {
            cout << "\n\t\tLISTA ENLAZADA \n\n";
            cout << " 1. INGRESAR AL FINAL " <<endl;
            cout << " 2. INGRESAR AL INICIO "<<endl;
            cout << " 3. INGRESAR EN UNA POSICION  "<<endl;
            cout << " 4. ELIMINAR EL ULTIMO ELEMENTO "<<endl;
            cout << " 5. ELIMINAR EL PRIMER ELEMENTO "<<endl;
            cout << " 6. ELIMINAR ELEMENTO EN UNA POSICION "<<endl;
            cout << " 7. INGRESAR n CANTIDAD DE ELEMENTOS "<<endl;
            cout << " 8. ORDENAR ASCENDETE LA LISTA "<<endl;
            cout << " 9. ORDENAR DESCENDETE LA LISTA "<<endl;
            cout << " 10. MOSTRAR LISTA " <<endl;
            cout << " 11. SALIR " <<endl;
         
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
 
                            cout<<"\n SE ELIMINARA EL PRIMER ELEMENTO... ";
                            eliminarElemento(lista, 1);
                           
                        break;
 
                        case 6:
 
                            cout<<"\n POSICION A ELIMINAR:  ";cin >> posicion;
                            eliminarElemento(lista, posicion);
                           
                        break;
 
                        case 7:
 
                            cout<<"\n CANTIDAD DE NUMEROS A INGREAR :  ";cin >> cantidad;
                            cout<<"\n INGRESAR EL NUMERO DEL RANGON MAXIMO :  ";cin >> num;
                            random(lista, cantidad, num);
                           
                        break;
 
                        case 8:
 
                            cout<<"\n SE ORDENARA LA LISTA ASCENTENTEMENTE :  ";
                            ordenarAscendente(lista);
                           
                        break;
 
                        case 9:
 
                            cout<<"\n SE ORDENARA LA LISTA DESCENTENTEMENTE :  ";
                            ordenarDescendente(lista);
                           
                        break;
 
                        case 10:
             
                            cout << "\n\n MOSTRANDO LISTA\n\n";
                            mostrarLista(lista);
 
                        break;
           
                    }
             
                    cout<<endl<<endl;
                    system("pause");  system("cls");
             
                }while(op!=11);
             
               system("pause");
        }
};
