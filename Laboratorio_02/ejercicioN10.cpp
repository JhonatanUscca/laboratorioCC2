#include <iostream>
using namespace std;
int main(){
    int cont=0,b;
    string a;
    cout<<"Plabra? ";
    cin>>a;
    cout<<"La palabra es: "<<a<<endl;
    b=a.length();
    cout<<"La palabra nueva es : ";
    for(int i=1;i<=b;i++){
        cout<<a.substr(b-i,1)<<" ";
    }
}