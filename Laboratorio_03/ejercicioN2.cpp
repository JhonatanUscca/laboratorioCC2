#include <iostream>
using namespace std;
bool bisiesto(int a){
    if(a%4==0){
        return true;
    }
    else{
        return false;
    }
 
}
int main(){
    int a;
    cout<<"An-o? ";
    cin>>a;
    if(bisiesto(a)==1){
        cout<<"An-o escrito es bisiesto. ";
    }
    else{
        cout<<"An-o escrito no es bisiesto. ";
    }
}
