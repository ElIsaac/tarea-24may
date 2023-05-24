#include <iostream>
#include <vector>

using namespace std;

class Rock {
public:
    Rock() {
        cout << "Constructor por defecto" << endl;
    }

    Rock(const Rock& other) {
        cout << "Constructor copia" << endl;
    }

    Rock& operator=(const Rock& other) {
        cout << "asignado" << endl;
        return *this;
    }

    ~Rock() {
        cout << "Destructor ejecutado" << endl;
    }
};

int main() {
    int tamanio;
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamanio;

    cout << "Vector<Rock>:" << endl;
    vector<Rock> rockVector;
    rockVector.reserve(tamanio);

    for (int i = 0; i < tamanio; i++) {
        rockVector.emplace_back();
    }

    cout << endl << "Vector<Rock*>:" << endl;
    vector<Rock*> rockPunteroVector;
    rockPunteroVector.reserve(tamanio);

    for (int i = 0; i < tamanio; i++) {
        Rock* rockPuntero = new Rock();
        rockPunteroVector.push_back(rockPuntero);
    }

    for (Rock* rockPuntero : rockPunteroVector) { //itera en los elementos de rockPunteroVector
        delete rockPuntero;                     //  y en cada iteraciom los elementos toman elnombre rockPuntero
    }

    // No es posible crear un vector de referencias (Vector<Rock&>) en C++ debido 
    //a que las referencias deben estar inicializadas al momento de su creación y no pueden ser reasignadas posteriormente.

    return 0;
}
