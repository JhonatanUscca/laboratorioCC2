using namespace std;
#include<iostream>
int main(){
    int A[5][3],sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"numero: ";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if((i+1)%2==0){
                sum=sum+A[i][j];
            }
        }
    }
    cout<<"la suma es de las filas par es: "<<sum;
}
