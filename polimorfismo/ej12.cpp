#include <iostream>
using namespace std;

// Clase base abstracta para las plantas
class Planta {
public:
    virtual void regar() = 0;
    virtual void encenderLuzArtificial() = 0;
    virtual void apagarLuzArtificial() = 0;
};

// Clase para la planta de tomate
class Tomate : public Planta {
public:
    void regar() override {
        cout << "Riego para el tomate"<<endl;
    }

    void encenderLuzArtificial() override {
        cout << "Encendiendo luz artificial para el tomate"<<endl;
    }

    void apagarLuzArtificial() override {
        cout << "Apagando luz artificial para el tomate"<<endl;
    }
};

// Clase para la planta de chile
class Chile : public Planta {
public:
    void regar() override {
        cout << "Riego para el chile"<<endl;
    }

    void encenderLuzArtificial() override {
        cout << "Encendiendo luz artificial para el chile"<<endl;
    }

    void apagarLuzArtificial() override {
        cout << "Apagando luz artificial para el chile"<<endl;
    }
};

// Clase para la planta de cebolla
class Cebolla : public Planta {
public:
    void regar() override {
        cout << "Riego para la cebolla"<<endl;
    }

    void encenderLuzArtificial() override {
        cout << "Encendiendo luz artificial para la cebolla"<<endl;
    }

    void apagarLuzArtificial() override {
        cout << "Apagando luz artificial para la cebolla"<<endl;
    }
};

// Clase para el invernadero
class Invernadero {
private:
    Planta* planta;

public:
    Invernadero(Planta* planta) : planta(planta) {}

    void realizarCuidados() {
        planta->encenderLuzArtificial();
        planta->regar();
        planta->apagarLuzArtificial();
    }

    void cosechar() {
        delete planta;
    }
};

int main() {
    Planta* tomate = new Tomate();
    Planta* chile = new Chile();
    Planta* cebolla = new Cebolla();

    Invernadero invernaderoTomate(tomate);
    Invernadero invernaderoChile(chile);
    Invernadero invernaderoCebolla(cebolla);

    invernaderoTomate.realizarCuidados();
    invernaderoChile.realizarCuidados();
    invernaderoCebolla.realizarCuidados();

    invernaderoTomate.cosechar();
    invernaderoChile.cosechar();
    invernaderoCebolla.cosechar();

    return 0;
}
