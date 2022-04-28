#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t t;
    int h,m,b,d,c;
    int f;
    char a;
    t=time(NULL);
    struct tm *fecha;
    fecha= localtime(&t);
    cout<<fecha->tm_hour<<":"<<fecha->tm_min<<endl;
    h=fecha->tm_hour;
    m=fecha->tm_min;
    a=':';
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