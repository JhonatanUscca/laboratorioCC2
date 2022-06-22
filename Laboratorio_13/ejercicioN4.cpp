#include <string>
#include <iostream>


using namespace std;



struct Datos{

    string nombre;
    string sexo;
    double sueldo;
    

};


void insertar(Datos Persona[100], int num)
{
 
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre de la persona : "; cin >> Persona[i].nombre;
        cout << i+1 << ".Sexo de la persona : "; cin >> Persona[i].sexo;
        cout << i+1 << ".Sueldo de la persona (soles) : "; cin >> Persona[i].sueldo;
        cout << endl;

    }
    cout << endl;
}




void mostrarLista(Datos Persona[100], int num)
{
    
    for( int i=0; i<num; i++)
    {
        cout << i+1 << ".Nombre : " << Persona[i].nombre << endl; 
        cout << i+1 << ".Sexo de la persona : " << Persona[i].sexo << endl;
        cout << i+1 << ".Sueldo de la persona (soles) : " <<  Persona[i].sueldo << endl;
        cout << endl;
    }
    cout << endl;
}


void mayorSueldo(Datos Persona[100], int num)
{

    double aux = Persona[0].sueldo;
    int posicion = 0;
    
   
    for(int  i=0; i<num; i++)
    {
        if( aux < Persona[i].sueldo){
            aux = Persona[i].sueldo;
            posicion = i;
        }

    }
    cout << "La persona con el meyor sueldo es " << Persona[posicion].nombre << " con el sexo " 
    << Persona[posicion].sexo << " y con el sueldo en soles es " << Persona[posicion].sueldo ;
    cout << endl;
}

void menorSueldo(Datos Persona[100], int num)
{

    double aux = Persona[0].sueldo;
    int posicion = 0;
    
   
    for(int  i=0; i<num; i++)
    {
        if(aux > Persona[i].sueldo  ){
            aux = Persona[i].sueldo;
            posicion = i;
        }

    }
    cout << "La persona con el menor sueldo es " << Persona[posicion].nombre << " con el sexo " 
    << Persona[posicion].sexo << " y con el sueldo en soles es " << Persona[posicion].sueldo ;
    cout << endl;
}


int main()

{
    Datos a[100];
    int numero;



    cout << "\n\t.:LISA DE PERSONAS\n";
    cout << "Cantidad de personas? "; cin >> numero;
    insertar(a,numero);
    cout << "Se mostrara la lista completa: " << endl;
    mostrarLista(a,numero);
    cout << "Resultado de la persona que gana mas y menos sueldo : " << endl;
    mayorSueldo(a,numero);
    menorSueldo(a,numero);
    return 0;

}
