#include <iostream>
using namespace std;
#include <ctime>
int main(){
    int h,m,b,d,c;
    int f;
    char a;
    cout<<"Tiempo? ";
    cin>>h>>a>>m;
    cout<<"minutos aumentados? ";
    cin>>b;
    d=(b+m)/60;
    c=(b+m)-(60*d);
    f=h-12;
    if(f>=0){
        if(c==0){
            cout<<"la hora es : "<<d+f<<a<<m<<" PM";
        }
        else{
            cout<<"la hora es : "<<d+f<<a<<c<<" PM";
        }
    }
    else{
        if(c==0){
            cout<<"la hora es : "<<h+d<<a<<m<<" AM";
        }
        else{
            cout<<"la hora es : "<<h+d<<a<<c<<" AM";
        }
    }
        
    return 0;
}