#include <string>
#include <iostream>


using namespace std;

struct Notas{
    double nota1;
    double nota2;
    double nota3;
    double nota4;

};


struct Datos{

    string nombre;
    char grupo;

};


void insertar(Datos Persona[100],Notas n[100], int num)
{
 
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre del estudiante : "; cin >> Persona[i].nombre;
        cout << i+1 << ".Grupo de la persona : "; cin >> Persona[i].grupo;
        cout << i+1 << ".Nota de la primera fase : "; cin >> n[i].nota1;
        cout << i+1 << ".Nota de la segunda fase : "; cin >> n[i].nota2;
        cout << i+1 << ".Nota de la tercera fase : "; cin >> n[i].nota3;
        cout << i+1 << ".Nota del proyecto  : "; cin >> n[i].nota4;
        cout << endl;

    }
    cout << endl;
}




void mostrarLista(Datos Persona[100],Notas n[100], int num)
{
    
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre : " << Persona[i].nombre << endl; 
        cout << i+1 << ".Grupo de la persona : " << Persona[i].grupo << endl;
        cout << i+1 << ".Nota de la primera fase : " <<  n[i].nota1 << endl;
        cout << i+1 << ".Nota de la segunda fase : " << n[i].nota1 << endl;
        cout << i+1 << ".Nota de la tercera fase : " << n[i].nota1 << endl;
        cout << i+1 << ".Nota del proyecto  : " << n[i].nota4 << endl;
    }
    cout << endl;
}



void mostrarPonderado(Datos Persona[100],Notas n[100], int num)
{
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre : " << Persona[i].nombre << endl;
        cout << i+1 << ".Grupo de la persona : " << Persona[i].grupo << endl;
        cout << i+1 << ".Nota de la primera fase : " <<  n[i].nota1*0.15 << endl;
        cout << i+1 << ".Nota de la segunda fase : " << n[i].nota1*0.2 << endl;
        cout << i+1 << ".Nota de la tercera fase : " << n[i].nota1*0.25 << endl;
        cout << i+1 << ".Nota del proyecto  : " << n[i].nota4*0.4 << endl;
    }
    cout << endl;

}

void resutados(Datos Persona[100],Notas n[100], int num)
{
   

    for(int i=0; i<num; i++)
    {
        if( ((n[i].nota1*0.15)+ (n[i].nota1*0.2)+(n[i].nota1*0.25)+ (n[i].nota4*0.4)) > 10.5)
        {
            cout << "El estudiante " << Persona[i].nombre << " en el grupo " << Persona[i].grupo << " aprobo." << endl;
        } else {
            cout << "El estudiante " << Persona[i].nombre << " en el grupo " << Persona[i].grupo << " no aprobo." << endl;
        }

    }
    cout << endl;
}


int main()

{
    Datos a[100];
    Notas n[100];
    int numero;



    cout << "\n\t.:LISA DE ESTUDANTES\n";
    cout << "Escriba la cantidad de estudiantes : " << endl;
    cin  >> numero;
    insertar(a,n,numero);
    cout << "Se mostrara la lista completa: " << endl;
    mostrarLista(a,n,numero);
    cout << "Se mostrara la notas ponderadas: " << endl;
    mostrarPonderado(a,n,numero);
    cout << "Resutado : " << endl;
    resutados(a,n,numero);
    return 0;

}
