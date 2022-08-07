#include <iostream>
using namespace std;
#include <string>
 
template <int N>
 
struct Convertir
{
 
 
    void id() {
       
       
        enum { value = Convertir<N/2>::value };
        cout<< N%2;
       
    }
 
    void con(){
    Convertir<N/16> a;
    a.id();
    if(N%16==10) cout<<"A";
    else if(N%16==11) cout<<"B";
    else if(N%16==12) cout<<"C";
    else if(N%16==13) cout<<"D";
    else if(N%16==14) cout<<"E";
    else if(N%16==15) cout<<"F";
    else cout<<N%16;
    }
};
 
 
template <>
 
struct Convertir<0>
{
    enum { value = 0 };
};
 
 
int main()
{
    Convertir<27> a;
    a.con();
    cout << endl;
   
    system("pause");
}
