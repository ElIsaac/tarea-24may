#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    // Pseudo-constructor
    void pseudoConstructor(const string& nombre, const string& carrera, int semestre, float promedio) {
        this->nombre = nombre;
        this->carrera = carrera;
        this->semestre = semestre;
        this->promedio = promedio;
    }

    // Constructor
    Estudiante(const string& nombre, string carrera, int semestre, float promedio) {
        pseudoConstructor(nombre, carrera, semestre, promedio);
    }

    void getKardex() {
        cout << "Nombre: " << nombre << endl;
        cout << "Carrera: " << carrera << endl;
        cout << "Semestre: " << semestre << endl;
        cout << "Promedio: " << promedio << endl;
    }

private:
    string nombre;
    string carrera;
    int semestre;
    float promedio;
};

int main() {
    Estudiante estudiante("Juan Perez", "Ingenieria en sistemas computacionales", 3, 8.5);

    estudiante.getKardex();

    return 0;
}
