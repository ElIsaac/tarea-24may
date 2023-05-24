#include <iostream>
#include <vector>

using namespace std;

// Clase base Avion
class Avion {
protected:
    string lugar;

public:
    Avion(const string& lugar) : lugar(lugar) {}

    virtual void despegar() = 0;
    virtual void aterrizar() = 0;
};

// Clase derivada Jet
class Jet : public Avion {
public:
    Jet(const string& lugar) : Avion(lugar) {}

    void despegar() override {
        cout << "Jet despegando..." << endl;
    }
    
    void aterrizar() override {
        cout << "Jet aterrizando en " << lugar << endl;
    }
};

// Clase derivada AvionComercial
class AvionComercial : public Avion {
public:
    AvionComercial(const string& lugar) : Avion(lugar) {}

    void despegar() override {
        cout << "Avión comercial despegando..." << endl;
    }
    
    void aterrizar() override {
        cout << "Avión comercial aterrizando en " << lugar << endl;
    }
};

// Clase derivada Avioneta
class Avioneta : public Avion {
public:
    Avioneta(const string& lugar) : Avion(lugar) {}

    void despegar() override {
        cout << "Avioneta despegando..." << endl;
    }
    
    void aterrizar() override {
        cout << "Avioneta aterrizando en " << lugar << endl;
    }
};

// Clase Torre
class Torre {
private:
    vector<Avion*> aviones;

public:
    Torre() {
        // Inicializar los tres tipos de aviones en la torre
        Avion* jet = new Jet("Aeropuerto A");
        Avion* avionComercial = new AvionComercial("Aeropuerto B");
        Avion* avioneta = new Avioneta("Aeropuerto C");

        aviones.push_back(jet);
        aviones.push_back(avionComercial);
        aviones.push_back(avioneta);
    }

    void enviarMensajeDespegar() {
        cout << "Enviando mensaje de despegue a todos los aviones:" << endl;
        for (Avion* avion : aviones) {
            avion->despegar();
        }
    }

    void enviarMensajeAterrizar() {
        cout << "Enviando mensaje de aterrizaje a todos los aviones:" << endl;
        for (Avion* avion : aviones) {
            avion->aterrizar();
        }
    }
};

int main() {
    // Crear objeto de la torre
    Torre torre;

    // Enviar mensajes a los aviones
    torre.enviarMensajeDespegar();
    torre.enviarMensajeAterrizar();

    return 0;
}
