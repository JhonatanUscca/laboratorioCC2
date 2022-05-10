using namespace std;
#include<iostream>
int main(){
    int a,b,aux;
    int *pa,*pb;
    a = 5;
    b = 6;
    aux = b;
    pa = &a;
    pb = &b;
    *pb = a;
    *pa = aux;
    cout<<"resultado : "<<a<<" "<<b;
}
