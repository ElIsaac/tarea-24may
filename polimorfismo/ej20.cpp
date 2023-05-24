#include <iostream>
#include <ctime>

using namespace std;

class Padre {
public:
    virtual void funcionVirtual() {}
    void funcionNormal() {}
};

class Hijo : public Padre {
public:
    void funcionVirtual() override {}
};

int main() {
    Padre* hijo = new Hijo(); // Upcast a puntero de tipo de la clase Padre

    // Medir tiempo de llamada a función virtual
    clock_t inicioVirtual = clock();
    for (int i = 0; i < 10000000; ++i) {
        hijo->funcionVirtual();
    }
    clock_t finVirtual = clock();
    double tiempoVirtual = double(finVirtual - inicioVirtual) / CLOCKS_PER_SEC;

    // Medir tiempo de llamada a función no virtual
    clock_t inicioNoVirtual = clock();
    for (int i = 0; i < 10000000; ++i) {
        hijo->funcionNormal();
    }
    clock_t finNoVirtual = clock();
    double tiempoNormal = double(finNoVirtual - inicioNoVirtual) / CLOCKS_PER_SEC;

    cout << "El tiempo total al llamar 10,000,000 veces la funcion virtual: " << tiempoVirtual << " segundos." << endl;
    cout << "El tiempo total al llamar 10,000,000 veces la funcion normal: " << tiempoNormal << " segundos." << endl;

    delete hijo;
    return 0;
}
