#include <iostream>
using namespace std;
 
class ProductoBancario{
   protected:
       string cliente;
       double saldo;
       int numProductos;
   public:
       ProductoBancario(){}
       ProductoBancario(string a,double b,int c){cliente=a;saldo=b;numProductos=c;}
       virtual void imprimir();
       ~ProductoBancario(){}
};
 
class Cuenta:public ProductoBancario{
   public:
       Cuenta(){}
       Cuenta(string, double, int);
       void imprimir();
       ~Cuenta(){}
};
 
class Prestamo:public ProductoBancario{
   protected:
       Prestamo(){}
       Prestamo(string, double, int);
       void imprimir();
       ~Prestamo(){}
};
 
class CuentaJoven:public Cuenta{
   private:
        CuentaJoven(){}
        CuentaJoven(string, double, int);
        void imprimir();
        ~CuentaJoven(){}
};
 
 
class Hipoteca:public Prestamo{
   public:
        Hipoteca(){}
        Hipoteca(string, double, int);
        void imprimir();
        ~Hipoteca(){}
};
