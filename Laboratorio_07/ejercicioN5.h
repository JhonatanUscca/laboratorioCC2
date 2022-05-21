#include<iostream>
using namespace std;
 
class operacionBase{
    protected:
        int operador;
    public:
        operacionBase(){}
        void setOperacion(int o){operador=o;}
        int getOperacion(){return operador;}
        ~operacionBase(){}
};
 
class operacionFactorial:public operacionBase{
    private:
        int operador;
    public:
        operacionFactorial(){}
        //No son necesarios puesto que en la clase base se esta asignado los elementos necesarios
        //que se utiliza en funcion 'devolverFactorial()'.
        //void setOperacion(int o){operador=o;}
        //int getOperacion(){return operador;}
        int devolverFactorial();
        ~operacionFactorial(){}
};
