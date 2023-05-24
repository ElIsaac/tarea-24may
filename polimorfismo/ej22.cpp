#include <iostream>
using namespace std;

class Pan {
public:
    virtual void preparar() {
        cout << "Preparando el pan" << endl;
    }

    virtual void hornear() {
        cout << "Horneando el pan" << endl;
    }

    virtual void servir() {
        cout << "Sirviendo el pan" << endl;
    }
};

class PanIntegral : public Pan {
public:
    void servir() override {
        cout << "Sirviendo el pan integral" << endl;
    }
    
};

int main() {
    
    PanIntegral panIntegral;
    panIntegral.preparar();
    panIntegral.hornear();
    panIntegral.servir();
    
    Pan* panPtr = &panIntegral;
    panPtr->preparar();
    panPtr->hornear();
    panPtr->servir();

    return 0;
}
