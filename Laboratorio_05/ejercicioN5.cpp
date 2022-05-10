#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>
 
void llenar(char *v)
{
    cout<<"Llenando el vector ...\n";
    cin>>v;  
}
void print(char *v)
{
    cout<<"   "<<v<<endl;
 
}
void crear(char *&v)
{
    v=new char;
}
void borrar(char *v)
{
    delete v;
}
 
void concatenar( char *v2, char *v1){
 
    strcat(v1,v2);
 
    cout<<"resultado : "<<v1;
}
 
int main()
{
    char *v1, *v2;
    crear(v1);crear(v2);
    llenar(v1);llenar(v2);
    print(v1);print(v2);
    concatenar(v1,v2);
    borrar(v1);borrar(v2);
    return 0;
}
