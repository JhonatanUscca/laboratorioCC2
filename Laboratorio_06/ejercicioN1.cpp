#include <iostream>
 
using namespace std;
 
class AreaPer{
    private:
        float lado1,lado2;
    public:
    AreaPer(){}
    AreaPer(float a,float b);
    ~AreaPer(){}
    int area();
    int perimetro();
   
};
 
AreaPer::AreaPer(float a,float b){
    lado1=a;
    lado2=b;
}
 
int AreaPer::area(){
    return lado1*lado2;
}
 
int AreaPer::perimetro(){
    return (lado1*2)+(lado2*2);
}
 
int main(){
    float num1,num2;
    cout<<"Ingrese los dos numeros: ";
    cin>>num1>>num2;
    AreaPer clase = AreaPer(num1,num2);
    cout<<"La area es: "<<clase.area()<<endl;
    cout<<"El perimetro es: "<<clase.perimetro();
    return 0;
}
