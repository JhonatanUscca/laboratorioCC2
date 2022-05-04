using namespace std;
#include<iostream>
int main(){
    string A[10][3],b,M[1][3];
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                cout<<"producto "<<i+1<<" ? ";
                cin>>A[i][j];
            }
            if(j==1){
                cout<<"presio "<<i+1<<" ? ";
                cin>>A[i][j];
            }
            if(j==2){
                cout<<"cantidad "<<i+1<<" ? ";
                cin>>A[i][j];
            }  
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<endl;
           
        }
        cout<<"\n**************************************";
    }
    cout<< "\nBuscar un producto por su nombre ";
    cin>>b;
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if(b==A[i][j]){
                cout<<"\nsi esta ";
            }
           
        }
        cout<<"\n**************************************";
    }
    cout<< "\nModificar el stock y precio de un producto dado ";
    cout<<"\nnombre ";
    cin>>M[0][0];
    cout<<"\nprecio ";
    cin>>M[0][1];
    cout<<"\ncantidad ";
    cin>>M[0][2];
    cout<< "\nSe tomara la primera lista para cambiar ";
 
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if(i==0&&j==0){
                A[i][j]=M[0][0];
            }
            if(i==0&&j==1){
                A[i][j]=M[0][1];
            }
            if(i==0&&j==1){
                 A[i][j]=M[0][2];
            }  
        }
        cout<<"\n**************************************";
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<endl;
        }
        cout<<"\n**************************************";
    }
 
}
