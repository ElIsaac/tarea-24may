#include <iostream>
using namespace std;

class Base {
public:
    virtual void mostrar() {
        cout << "clase base" << endl;
    }
};

class Derivada : public Base {
public:
    void mostrar() override {
        cout << "clase derivada" << endl;
    }
};

int main() {
    Base* objeto = new Derivada();
    objeto->mostrar();

    delete objeto;

    return 0;
}
