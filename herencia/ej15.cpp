#include <iostream>

class Gerente {
public:
    static void saludar() {
        std::cout << "Hola, soy el gerente." << std::endl;
    }

    static void despedir() {
        std::cout << "Adiós, soy el gerente." << std::endl;
    }
};

class Subgerente : public Gerente {
public:
    static void saludar() {
        std::cout << "Hola, soy el subgerente." << std::endl;
    }
};

int main() {
    Gerente::saludar();     // Salida: "Hola, soy el gerente."
    Gerente::despedir();    // Salida: "Adiós, soy el gerente."

    Subgerente::saludar();  // Salida: "Hola, soy el subgerente."
    Subgerente::despedir(); // Salida: "Adiós, soy el gerente." (la función se oculta)

    return 0;
}
