#include <string>
#include <iostream>


using namespace std;


struct Datos{

    string nombres;
    int ano;
    int mes;
    int dia;

};


void insertar(Datos Persona[100], int num)
{
 
    for( int i=0; i<num; i++)
    {
        cout << "Nombre del estudiante " << i+1 <<  endl;
        cin >>  Persona[i].nombres;
        cout << "El el ano de nacimiento del estudiante  " << i+1 <<  endl;
        cin >>  Persona[i].ano;
        cout << "El el mes de nacimiento del estudiante  " << i+1 <<  endl;
        cin >>  Persona[i].mes;
        cout << "El el dia de nacimiento del estudiante  " << i+1 <<  endl;
        cin >>  Persona[i].dia;
        cout << endl;   
    }
}



void cumplea(Datos a[100], int num , int cmes)
{
    for( int i=0; i<num; i++)
    {
        if(a[i].mes == cmes ){
            cout << "Nombre del estudiante " << i+1 << " es : " << endl;
            cout << a[i].nombres ;
            cout << " su fecha de nacimiento " << i+1 << " es : " << a[i].ano << "/ " << a[i].mes << "/ " << a[i].dia;
            cout << endl; 
        } 
    }
}


void mostrarLista( Datos a[100], int num)
{
    
    for( int i=0; i<num; i++)
    {
        cout << "Nombre del estudiante " << i+1 << " es : " << endl;
        cout << a[i].nombres ;
        cout << " su fecha de nacimiento " << i+1 << " es : " << a[i].ano << "/ " << a[i].mes << "/ " << a[i].dia;
        cout << endl;   
    }
}


int main()

{
    Datos a[100];
    int numero;
    int tiempo;


    cout << "\n\t.:LISA DE ESTUDANTES\n";
    cout << "Escriba la cantidad de estudiantes : " << endl;
    cin  >> numero;
    insertar(a,numero);
    cout << "Se mostrara la lista completa: ";
    mostrarLista(a,numero);
    cout << "Se mostrara los estudiantes que cumple este mes sus cumpleaños : "<< endl;
    cout << "Mes actual (numero):"; cin >> tiempo;
  
    cumplea(a, numero, tiempo);
    return 0;

}
