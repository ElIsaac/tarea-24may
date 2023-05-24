#include <iostream>

using namespace std;

class Pan {
public:
    int cantidadHarina;
    
    Pan(int cantidadHarina) {
        this->cantidadHarina = cantidadHarina;
    }
};

class Pastel : public Pan {
public:
    int cantidadBetun;
    
    Pastel(int cantidadHarina, int cantidadBetun) : Pan(cantidadHarina) {
        this->cantidadBetun = cantidadBetun;
    }
};

int getSize(Pan& p) {
    return sizeof(p);
}

int main() {
    Pastel pCumpleanios(12, 123);

    cout << "El tamaño de la instancia pastel es: " << sizeof(pCumpleanios) << " bytes" << endl;
    cout << "El tamaño de la instancia pan es: " << getSize(pCumpleanios) << " bytes" << endl;
    

    return 0;
}
