#include <iostream>
 
#include <ctime>
using namespace std;
 
class fecha{
    private:
        int diaNacimiento;
        int mesNacimiento;
        int annoNacimiento;
        int diaHoy;
        int mesHoy;
        int annoHoy;
    public:
        fecha(){}
        fecha(int a,int b,int c);
        ~fecha(){}
        void fechaHoy();
        void calcularEdad();
        void mostar();
};
fecha::fecha(int a,int b,int c){
        time_t t = time(0);
        tm* now = localtime(&t);
 
        diaNacimiento = a;
        mesNacimiento = b;
        annoNacimiento = c;
        diaHoy = now->tm_mday;
        mesHoy = now->tm_mon + 1;
        annoHoy = now->tm_year + 1900;
}
 
void fecha::calcularEdad(){
    int an1,di1,me1,sun1,sun2,resu;
 
 
    sun1=(annoNacimiento*12*30)+(mesNacimiento*30)+(diaNacimiento);
    sun2=(annoHoy*12*30)+(mesHoy*30)+(diaHoy);
 
    resu=sun2-sun1;
    an1=resu/360;
    me1=(resu-(an1*360))/30;
    di1=(resu-(me1*30)-(an1*360));
    cout<<"Mi edad es : "<<an1<<" annos,  "<<me1<<" meses, "<<di1<<" dias. ";
 
 
}
 
void fecha::mostar(){
    cout<<"Fecha actual : "<<diaHoy<<" / "<<mesHoy<<" / "<<annoHoy<<endl;
    cout<<"Fecha de nacimiento : "<<diaNacimiento<<" / "<<mesNacimiento<<" / "<<annoNacimiento<<endl;
    cout<<"-------------------------------------------------------------------------------------------------\n";
    cout<<"Tu edad  \n";
    calcularEdad();
 
 
}
 
int main(){
        int diaNacimiento_;
        int mesNacimiento_;
        int annoNacimiento_;
        int diaHoy_;
        int mesHoy_;
        int annoHoy_;
        cout<<"INGRESA TU FECHA DE NACIMIENTO : "<<endl;
        cout<<"dia: ";
        cin>>diaNacimiento_;
        cout<<"mes: ";
        cin>>mesNacimiento_;
        cout<<"anno: ";
        cin>>annoNacimiento_;
   
 
 
 
        fecha fecha1 = fecha(diaNacimiento_,mesNacimiento_,annoNacimiento_);
 
        fecha1.mostar();
       
}