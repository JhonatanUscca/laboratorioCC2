#include <iostream>
 
using namespace std;
 
class Disco{
    protected:
        double capacidadDisco;
    public:
        Disco(){}
        void setCapacidadDisco(double d){capacidadDisco=d;}
        double getCapacidadDisco(){return capacidadDisco;}
        virtual void mostrar();
        ~Disco(){}
};
 
class Multimedia: public Disco{
    private:
        string multimedia;
        double pesoMultimedia;
    public:
        Multimedia(){}
        void setMultimedia(string m){multimedia=m;}
        string getMultimedia(){return multimedia;}
        void setPesoMultimedia(double p){pesoMultimedia=p;}
        double getPesoMultimedia(){return pesoMultimedia;}
        double datosRestates(){return capacidadDisco-pesoMultimedia;}
        void mostrar();
        ~Multimedia(){}
};
