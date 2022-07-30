#include <iostream> 
 
class WinFactory {
    public:
        virtual ~WinFactory() {};
        virtual std::string Draw() const = 0;
};

class WinButton : public WinFactory {
    public:
        std::string Draw() const override {
            return "Windows.";
        }
};


class WinCheckBox : public WinFactory {
        std::string Draw() const override {
            return "Windows.";
        }
        
};

class MacFactory {
    public:
        virtual ~MacFactory() {};
        virtual std::string Draw() const = 0;
        virtual std::string draw(const WinFactory& colaborador) const = 0;
        virtual std::string draw(const MacFactory& colaborador) const = 0;
};

class MacButton : public MacFactory {
    public:
        std::string Draw() const override {
                return " Mac.";
        }
        std::string draw(const WinFactory& colaborador) const override {
                const std::string result = colaborador.Draw();
                return "Dibujando Button " + result;
        }
        std::string draw(const MacFactory& colaborador) const override {
                const std::string result = colaborador.Draw();
                return "Dibujando Button " + result;
        }
};

class MacCheckBox : public MacFactory {
    public:
        std::string Draw() const override {
            return " Mac. ";
        }   
        std::string draw(const WinFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "Dibujando checkbox " + result;
        }
        std::string draw(const MacFactory& colaborador) const override {
            const std::string result = colaborador.Draw();
            return "Dibujando checkbox " + result;
        }
};


class GUIFactory {
    public:
        virtual WinFactory* CrearControlW() const = 0;
        virtual MacFactory* CrearControlM() const = 0;
};


class Button : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinButton();
        }
        MacFactory* CrearControlM() const override {
            return new MacButton();
        }

};

class CheckBox : public GUIFactory {
    public:
        WinFactory* CrearControlW() const override {
            return new WinCheckBox();
        }
        MacFactory* CrearControlM() const override {
            return new MacCheckBox();
        }
};



void Aplication(const GUIFactory& f, int os) {

   if( os == 1 ) {
    const WinFactory* producto_a = f.CrearControlW();
    const MacFactory* producto_b = f.CrearControlM();
    std::cout << producto_a->Draw() << "\n";
    std::cout << producto_b->draw(*producto_a) << std::endl;
    delete producto_a;
    delete producto_b;
   }
   if ( os == 2 ) {
    const MacFactory* producto_b = f.CrearControlM();
    const WinFactory* producto_a = f.CrearControlW();
    
    std::cout << producto_b->Draw() << "\n";
    std::cout << producto_b->draw(*producto_b) << std::endl;
    delete producto_a;
    delete producto_b;

   }
   
}


int main() {
    std::cout << "Cliente: ";
    Button* f1 = new Button();
    Aplication(*f1, 1); // 1 - Windows
    delete f1;
    std::cout << std::endl;
    std::cout << "Cliente: ";
    Button* f2 = new Button();
    Aplication(*f2, 2); // 2 - Mac
    delete f2;
    return 0;
}
