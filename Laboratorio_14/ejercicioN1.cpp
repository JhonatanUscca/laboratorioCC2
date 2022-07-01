#include <iostream>
 
using namespace std;
 
void crear(int **&A){
    A=new int*[3];  
}
 
void crearMatriz(int **&A,int cont){
    A[cont]=new int[3];
}
 
void ingresarProducto(int **A,int cont_a){
    cin>>*(*(A+cont_a)+0);
}
 
void ingresarPrecio(int **A,int cont_a){
    cin>>*(*(A+cont_a)+1);
 
}
 
void ingresarCantidad(int **A,int cont_a){
    cin>>*(*(A+cont_a)+2);
}
 
 
void mostrar(int **A,int cont)
{
    for(int i=0;i<cont;i++)
    {
        for(int j=0;j<3;j++)
            cout<<*(*(A+i)+j)<<"\t";
        cout<<endl;
    }
 
}
 
int Buscar(int **A,int cont ,int codigo )
{
    for(int i=0;i<cont;i++)
    {
        for(int j=0;j<3;j++){
            if(codigo == *(*(A+i)+j)){
                return i;
            }
        }
    }
    return -1;
}
 
 
void borrar(int **A, int cont_a)
{
    delete A[cont_a];
}
 
void eliminar(int **A,int cont ,int codigo)
{
    int var = Buscar(A,cont,codigo);
 
    borrar(A,var);
    crearMatriz(A,var);
    if( var != cont-1 ) {
        for(int i= var ; i<cont; i++)
        {
            for(int j=0; j<3; j++){
                if(i != cont-1){
                    A[i][j] = A[i+1][j];
                }
            }
        }
    }
}
 
void ModificarCodigo(int **A,int var ,int codigo){
    A[var][0] = codigo;
}
 
void ModificarPrecio(int **A,int var ,int precio){
    A[var][1] = precio;
}
 
void ModificarCantidad(int **A,int var ,int cantidad){
    A[var][2] = cantidad;
}
 
void menu(){
    cout << "\n\t.:MENU:.\n";
    cout << "\n1. Dar de alta un Praducto.\n";
    cout << "\n2. Dar de baja un Praducto.\n";
    cout << "\n3. Buscar un producto por su codigo.\n";
    cout << "\n4. Modificar el codigo, precio o cantidad de un producto.\n";
    cout << "\n5. Mostrar datos. \n";
    cout << "\n6. Salir\n";
    cout << "\nObcion : \n";
}
 
int main()
{
    int **A;
    int op;
    int cont_a = 0;
    int cont_b = 0;
    crear(A);
    int codigoProducto;
    int codigo;
    int precio;
    int cantidad;
 
    do
    {
        menu();  cin>> op;
        switch (op)
        {
        case 1:
            crearMatriz(A,cont_a);
            cout << "\nIngrese el codigo producto : ";
            ingresarProducto(A,cont_a);
            cout << "\nIngrese el precio del producto : ";
            ingresarPrecio(A,cont_a);
            cout << "\nCantidad en stock : ";
            ingresarCantidad(A,cont_a);
            cont_a++;
            break;
        case 2:
            cout << "\nElije el producto : "; cin >> codigoProducto;
            if (  Buscar(A,cont_a,codigoProducto) > -1 ){
                cout << "\nSE ELIMINO EL PRODUCTO";
                eliminar(A, cont_a, codigoProducto);
                cont_a--;
            } else {
                cout << "\nNO SE ENCONTRO EL CODIGO EN LA LISTA";
            }
            break;
        case 3:
            cout << "\nElije el producto : "; cin >> codigoProducto;
            if (  Buscar(A,cont_a,codigoProducto) > -1 ){
                cout << "\nSi EXISTE ES TE PRODUCTO : \n";
            } else {
                cout << "\nNO SE ENCONTRO EL CODIGO EN LA LISTA";
            }
            break;
        case 4:
            cout << "Ingrese el codigo del producto que quiere cambiar :" ;
            cin >> codigoProducto;
            if (  Buscar(A,cont_a,codigoProducto) > -1 ){
                cout << "Ingrese el nuevo codigo producto :"; cin >> codigo;
                ModificarCodigo(A,Buscar(A,cont_a,codigoProducto),codigo);
                cout << "Ingrese el nuevo codigo producto :"; cin >> precio;
                ModificarPrecio(A,Buscar(A,cont_a,codigo),precio);
                cout << "Ingrese el nuevo codigo producto :"; cin >> cantidad;
                ModificarCantidad(A,Buscar(A,cont_a,codigo),cantidad);
            } else {
                cout << "\nNO SE ENCONTRO EL CODIGO EN LA LISTA";
            }
            break;
        case 5:
            cout << "\nMostrar datos : \n";
            mostrar(A,cont_a);
            break;
        }
        cout<<endl<<endl;
        system("pause");  system("cls");
    }while(op!=6);
   
}
