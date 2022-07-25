#include "iostream"
#include "vector"


using namespace std;

class Automivil {
public:
    std::vector<std::string> componentes;
    void ListaComp()const {
        std::cout << "Componentes : ";
        for (size_t i = 0; i < componentes.size(); i++) {
            if (componentes[i] == componentes.back()) {
                std::cout << componentes[i];
            }
            else {
                std::cout << componentes[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};


/* La interfaz de Builder especifica métodos para crear las diferentes partes
de los objetos Product. */

class IBuilder {
public:
    virtual ~IBuilder() {}
    virtual void ProducirPuertas(string) const = 0;
    virtual void ProducirTimon() const = 0;
    virtual void ProducirAsientos(string, string) const = 0;

    virtual void ProducirMotorDiesel() const = 0;
    virtual void ProducirMotorExplosionAGasolina() const = 0;
    virtual void ProducirMotorHibrido() const = 0;
    virtual void ProducirMotorElectrico() const = 0;

    virtual void ProducirBateria() const = 0;

    virtual void ProducirCajaDeCambios() const = 0;

    virtual void ProducirChasisMotor() const = 0;
    virtual void ProducirChasisSistemaDeTransmision() const = 0;
    virtual void ProducirChasisSistemaDeFrenos() const = 0;
    virtual void ProducirChasisSistemaDeDireccion() const = 0;
    virtual void ProducirChasisSistemaDeSuspension() const = 0;

    virtual void ProducirFusibles() const = 0;

    virtual void ProducirAlternador() const = 0;

    virtual void ProducirRadiador() const = 0;

    virtual void ProducirDireccionVolante() const = 0;
    virtual void ProducirDireccionMecanismoDeBloque() const = 0;
    virtual void ProducirDireccionAntirrobo() const = 0;
    virtual void ProducirDireccionCanaDeLaDireccion() const = 0;
    virtual void ProducirDireccionCruecetas() const = 0;

    virtual void ProducirSuspensionResorte() const = 0;
    virtual void ProducirSuspensionBallestas() const = 0;
    virtual void ProducirSuspensionBarrasDeTorsion() const = 0;
    virtual void ProducirSuspensionBarrasEstabilizadoras() const = 0;
    virtual void ProducirSuspensionAmortiguadores() const = 0;

    
    virtual void ProducirFrenosDeDisco() const = 0;
    virtual void ProducirFrenosDeTambor() const = 0;
    virtual void ProducirFrenosDeABS() const = 0;
    virtual void ProducirFrenosDeMano() const = 0;

    virtual void ProducirLlantas() const = 0;
    virtual void ProducirNeumatico() const = 0;
    virtual void ProducirContrapesa() const = 0;

    
    virtual void ProducirValvulaAdmision() const = 0;
    virtual void ProducirValvulaEscape() const = 0;


    virtual void ProducirEspejos() const = 0;
    virtual void ProducirVidrios() const = 0;

    virtual void ProducirColor(string) const = 0;
  


};

/* Las clases de BuilderEspecifico siguen la interfaz de Builder y proporcionan
implementaciones específicas de los pasos de construcción. El programa puede
tener varias variaciones de Builders, implementadas de manera diferente. */

class BuilderEspecifico : public IBuilder {
private:
Automivil* product;
public:
    BuilderEspecifico() {
        this->Reset();
    }
    ~BuilderEspecifico() {
        delete product;
    }
    void Reset() {
        this->product = new Automivil();
    }
    /*
    void ProducirParteA()const override {
    this->product->componentes.push_back("ParteA1");
    }
    void ProducirParteB()const override {
    this->product->componentes.push_back("ParteB1");
    }
    void ProducirParteC()const override {
    this->product->componentes.push_back("ParteC1");
    }
    */
    void ProducirPuertas(string can) const override {
        this->product->componentes.push_back("Puertas: " + can);
    }
    void ProducirTimon() const override {
        this->product->componentes.push_back("Timon");
    }
    void ProducirAsientos(string can, string col) const override {
        this->product->componentes.push_back("Asientos: " + can + " - " + col);
    }

    void ProducirMotorDiesel() const override {
        this->product->componentes.push_back("Motor Diesel");
    }
    void ProducirMotorExplosionAGasolina() const override {
        this->product->componentes.push_back("Motor de Explosion a Gasolina");
    }
    void ProducirMotorHibrido() const override {
        this->product->componentes.push_back("Motor Hibrido");
    }
    void ProducirMotorElectrico() const override {
        this->product->componentes.push_back("Motor Electrico");
    }

    void ProducirBateria() const override {
        this->product->componentes.push_back("Bateria");
    }

    void ProducirCajaDeCambios() const override {
        this->product->componentes.push_back("Caja de Cambios");
    }

    void ProducirChasisMotor() const override {
        this->product->componentes.push_back("Chasis (Motor)");
    }
    void ProducirChasisSistemaDeTransmision() const override {
        this->product->componentes.push_back("Chasis (Sistema deTransmision)");
    }
    void ProducirChasisSistemaDeFrenos() const override {
        this->product->componentes.push_back("Chasis (Sistema de Frenos)");
    }
    void ProducirChasisSistemaDeDireccion() const override {
        this->product->componentes.push_back("Chasis (Sistema de Direccion)");
    }
    void ProducirChasisSistemaDeSuspension() const override {
        this->product->componentes.push_back("Chasis (Sistema de Suspension)");
    }

    void ProducirFusibles() const override {
        this->product->componentes.push_back("Fusibles");
    }

    void ProducirAlternador() const override {
        this->product->componentes.push_back("Alternador");
    }

    virtual void ProducirRadiador() const override {
        this->product->componentes.push_back("Radiador");
    }

    void ProducirDireccionVolante() const override {
        this->product->componentes.push_back("Direccion del Volante");
    }
    void ProducirDireccionMecanismoDeBloque() const override {
        this->product->componentes.push_back("Mecanismo de Bloque");
    }
    void ProducirDireccionAntirrobo() const override {
        this->product->componentes.push_back("Direccion de Antirrobo");
    }
    void ProducirDireccionCanaDeLaDireccion() const override {
        this->product->componentes.push_back("Direccion Caña de la Direccion");
    }
    void ProducirDireccionCruecetas() const override {
        this->product->componentes.push_back("Direccion de las Cruecetas");
    }

    void ProducirSuspensionResorte() const override {
        this->product->componentes.push_back("Suspension del Resorte");
    }
    void ProducirSuspensionBallestas() const override {
        this->product->componentes.push_back("Suspension de las Ballestas");
    }
    void ProducirSuspensionBarrasDeTorsion() const override {
        this->product->componentes.push_back("Suspension de las Barras de Torsion");
    }
    void ProducirSuspensionBarrasEstabilizadoras() const override {
        this->product->componentes.push_back("Suspension de Barras Estabilizadoras");
    }
    void ProducirSuspensionAmortiguadores() const override {
        this->product->componentes.push_back("Suspension de Amortiguadores");
    }

    
    void ProducirFrenosDeDisco() const override {
        this->product->componentes.push_back("Frenos de Disco");
    }
    void ProducirFrenosDeTambor() const override {
        this->product->componentes.push_back("Frenos de Tambor");
    }
    void ProducirFrenosDeABS() const override {
        this->product->componentes.push_back("Frenos de ABS");
    }
    void ProducirFrenosDeMano() const override {
        this->product->componentes.push_back("Frenos de Mano");
    }

    void ProducirLlantas() const override {
        this->product->componentes.push_back("Llantas");
    }
    void ProducirNeumatico() const override {
        this->product->componentes.push_back("Neumatico");
    }
    void ProducirContrapesa() const override {
        this->product->componentes.push_back("Contrapesa");
    }

    
    void ProducirValvulaAdmision() const override {
        this->product->componentes.push_back("Valvula de Admision");
    }
    void ProducirValvulaEscape() const override {
        this->product->componentes.push_back("Valvula de Escape");
    }


    void ProducirEspejos() const override {
        this->product->componentes.push_back("Espejos");
    }
    void ProducirVidrios() const override {
        this->product->componentes.push_back("Vidrios");
    }

    void ProducirColor(string c)  const override {
        this->product->componentes.push_back("color del auto (" + c + ")");
    }
 
    
    Automivil* GetProducto() {
        Automivil* resultado = this->product;
        this->Reset();
        return resultado;
    }
};

/*El Director solo es responsable de ejecutar los pasos de construcción en una
secuencia particular. Es útil cuando se fabrican productos de acuerdo con un
pedido o configuración específicos. Estrictamente hablando, la clase Director
es opcional, ya que el cliente puede controlar directamente a los
constructores.*/

class Director {
private:
IBuilder* builder;
public:
    void set_builder(IBuilder* builder) {
        this->builder = builder;
    }
    void BuildProductoChasis() {
        this->builder->ProducirChasisMotor();
        this->builder->ProducirChasisSistemaDeTransmision();
        this->builder->ProducirChasisSistemaDeFrenos();
        this->builder->ProducirChasisSistemaDeDireccion();
        this->builder->ProducirChasisSistemaDeSuspension();
    }
    void BuildProductoDireccion() {
        this->builder->ProducirDireccionVolante();
        this->builder->ProducirDireccionMecanismoDeBloque();
        this->builder->ProducirDireccionAntirrobo();
        this->builder->ProducirDireccionCanaDeLaDireccion();
        this->builder->ProducirDireccionCruecetas();
    }
    void BuildProductoSuspension() {
        this->builder->ProducirSuspensionResorte();
        this->builder->ProducirSuspensionBallestas();
        this->builder->ProducirSuspensionBarrasDeTorsion();
        this->builder->ProducirSuspensionBarrasEstabilizadoras();
        this->builder->ProducirSuspensionAmortiguadores();
    }
    void BuildProductoRuedasYLlatas() {
        this->builder->ProducirLlantas();
        this->builder->ProducirNeumatico();
        this->builder->ProducirContrapesa();

    }
    void BuildProductoValvulaDeEscape() {
        this->builder->ProducirValvulaAdmision();
        this->builder->ProducirValvulaEscape();

    }
};

/* El código del cliente crea un objeto constructor, se lo pasa al director y
luego inicia el proceso de construcción. El resultado final se recupera del
objeto constructor. */

void ClienteCode(Director& director)
{
    string t;
    int op1, op2;
    string cant1;
    string cant2, col;
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);
    
    std::cout << "Color del automovil?\n"; 
    cin>> t;
    builder->ProducirColor(t);
    
    std::cout << "Tipo de Motor:\n"; 
    std::cout << "\t.:MENU:.\n";
    std::cout << "1.Motor de Diesel\n"; 
    std::cout << "2.Motor de Explosion a Gasolina\n"; 
    std::cout << "3.Motor Hibrido\n"; 
    std::cout << "4.Motor Electrico\n"; 
    std::cout << "Opcion?\n"; cin >> op1;
    std::cout << "\n"; 
    switch (op1)
    {
    case 1 :
        builder->ProducirMotorDiesel();
        break;
    case 2 :
        builder->ProducirMotorExplosionAGasolina();
        break;
    case 3 :
        builder->ProducirMotorHibrido();
        break;
    case 4 :
        builder->ProducirMotorElectrico();
        break;
    }

    std::cout << "Tipo de Frenos:\n"; 
    std::cout << "\t.:MENU:.\n";
    std::cout << "1.Frenos de Disco\n"; 
    std::cout << "2.Frenos de Tambor\n"; 
    std::cout << "3.Frenos de ABS\n"; 
    std::cout << "4.Frenos de Mano\n"; 
    std::cout << "Opcion?\n"; cin >> op2;
    std::cout << "\n"; 
    switch (op2)
    {
    case 1 :
        builder->ProducirFrenosDeDisco();
        break;
    case 2 :
        builder->ProducirFrenosDeTambor();
        break;
    case 3 :
        builder->ProducirFrenosDeABS();
        break;
    case 4 :
        builder->ProducirFrenosDeMano();
        break;
    }  

    std::cout << "Cantidad de Puertas? :\n"; 
    cin >> cant1;
    builder->ProducirPuertas(cant1);

    std::cout << "Cantidad y color de Asientos? :\n"; 
    cin >> cant2 >> col;
    builder->ProducirAsientos(cant2, col);

    std::cout << "Producto (AUTOMOVIL) :\n";

    director.BuildProductoChasis();
    director.BuildProductoDireccion();
    director.BuildProductoSuspension();
    director.BuildProductoRuedasYLlatas();
    director.BuildProductoValvulaDeEscape();
 
    builder->ProducirTimon();

    builder->ProducirBateria();
    builder->ProducirCajaDeCambios();
    builder->ProducirFusibles();
    builder->ProducirAlternador();
    builder->ProducirRadiador();

    Automivil* p = builder->GetProducto();
    p->ListaComp();
    delete p;
    delete builder;
}

int main() {
    Director* director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}
