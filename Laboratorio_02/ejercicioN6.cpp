#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Numero? ";
    cin>>a;
    if(a==1){
        cout<<0<<endl;
    }
    int b=0,c=1,d;
    cout<<b<<","<<b;
    for(int i=3;i<=a;i++){
        d=b+c;
        cout<<","<<d;
        b=c;
        c=d;
    }
}