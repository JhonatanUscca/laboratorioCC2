#include <string>
#include <iostream>


using namespace std;



struct Datos{

    string nombre;
    int edad;
    double altura;
    

};


void insertar(Datos Persona[100], int num)
{
 
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre del estudiante : "; cin >> Persona[i].nombre;
        cout << i+1 << ".Edad de la persona : "; cin >> Persona[i].edad;
        cout << i+1 << ".Nota altura de la persona (metros) : "; cin >> Persona[i].altura;
        cout << endl;

    }
    cout << endl;
}




void mostrarLista(Datos Persona[100], int num)
{
    
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre : " << Persona[i].nombre << endl; 
        cout << i+1 << ".Edad de la persona : " << Persona[i].edad << endl;
        cout << i+1 << ".Nota altura de la persona (metros) : " <<  Persona[i].altura << endl;
        cout << endl;
    }
    cout << endl;
}


void resutados(Datos Persona[100], int num)
{
  
   
    for(int i=0; i<num; i++)
    {
        if( Persona[i].edad > 20 && Persona[i].altura > 1.70){
            cout <<".La persona  " << Persona[i].nombre << "  con edad " << Persona[i].edad << ", tine una altura (metros) de " <<  Persona[i].altura;
            cout << endl;
        }

    }
    cout << endl;
}


int main()

{
    Datos a[100];
    int numero=5;



    cout << "\n\t.:LISA DE ESTUDANTES\n";
    insertar(a,numero);
    cout << "Se mostrara la lista completa: " << endl;
    mostrarLista(a,numero);
    cout << "Resutado : " << endl;
    resutados(a,numero);
    return 0;

}
