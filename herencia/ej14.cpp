#include <iostream>
#include <string>

using namespace std;

class Traveler {
public:
    // Constructor que toma un argumento del tipo string
    Traveler(const string& nombre) {
        this->nombre = nombre;
        cout << "Constructor de Traveler" << endl;
    }

    // Constructor copia
    Traveler(const Traveler& t) {
        nombre = t.nombre;
        cout << "Constructor de copia de Traveler" << endl;
    }

    // Operador de asignación
    Traveler& operator=(const Traveler& t) {
        if (this != &t) {
            nombre = t.nombre;
        }
        cout << "Operador de asignación de Traveler" << endl;
        return *this;
    }

    // Función para obtener el nombre del viajero
    string getnombre() const {
        return nombre;
    }

private:
    string nombre;
};

class Pager {
public:
    // Constructor por defecto con valor por defecto
    Pager(const string& nombre = "lolo") {
        this->nombre = nombre;
        cout << "Constructor de Pager" << endl;
    }

    // Constructor copia
    Pager(const Pager& p) {
        nombre = p.nombre;
        cout << "Constructor de copia de Pager" << endl;
    }

    // Operador de asignación
    Pager& operator=(const Pager& p) {
        if (this != &p) {
            nombre = p.nombre;
        }
        cout << "Operador de asignación de Pager" << endl;
        return *this;
    }

    // Función para obtener el mensaje del pager
    string getnombre() const {
        return nombre;
    }

private:
    string nombre;
};

class BusinessTraveler : public Traveler {
public:
    // Constructor por defecto
    BusinessTraveler() : Traveler("") {
        pager = Pager();
        cout << "Constructor por defecto de BusinessTraveler" << endl;
    }

    // Constructor que toma una cadena como argumento
    BusinessTraveler(const string& nombre) : Traveler(nombre) {
        pager = Pager();
        cout << "Constructor de BusinessTraveler" << endl;
    }

    // Constructor copia
    BusinessTraveler(const BusinessTraveler& bt) : Traveler(bt) {
        pager = bt.pager;
        cout << "Constructor de copia de BusinessTraveler" << endl;
    }

    // Operador de asignación
    BusinessTraveler& operator=(const BusinessTraveler& bt) {
        if (this != &bt) {
            Traveler::operator=(bt);
            pager = bt.pager;
        }
        cout << "Operador de asignación de BusinessTraveler" << endl;
        return *this;
    }

    Pager pager;
};

int main() {
    // Ejemplo de uso
    BusinessTraveler traveler1("AMLO");
    BusinessTraveler traveler2 = traveler1;  // Constructor copia
    BusinessTraveler traveler3("lolo");
    traveler3 = traveler1;  // Operador de asignación
}