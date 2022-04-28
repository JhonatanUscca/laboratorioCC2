#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"numero 1? ";
    cin>>a;
    cout<<"numero 2? ";
    cin>>b;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
    }
    return 0;
}