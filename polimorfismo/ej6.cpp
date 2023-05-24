#include <iostream>
#include <string>

using namespace std;

// Clase base: Roedor
class Roedor {
public:
    virtual void roer() {
        cout << "Roedor::roer()" << endl;
    }

    virtual void comer() {
        cout << "Roedor::comer()" << endl;
    }

    virtual void dormir() {
        cout << "Roedor::dormir()" << endl;
    }
};

// Clase derivada: Raton
class Raton : public Roedor {
public:
    void roer() override {
        cout << "Raton::roer()" << endl;
    }

    void comer() override {
        cout << "Raton::comer()" << endl;
    }

    void dormir() override {
        cout << "Raton::dormir()" << endl;
    }
};

// Clase derivada: Gerbo
class Gerbo : public Roedor {
public:
    void roer() override {
        cout << "Gerbo::roer()" << endl;
    }

    void comer() override {
        cout << "Gerbo::comer()" << endl;
    }

    void dormir() override {
        cout << "Gerbo::dormir()" << endl;
    }
};

// Clase derivada: Hamster
class Hamster : public Roedor {
public:
    void roer() override {
        cout << "Hamster::roer()" << endl;
    }

    void comer() override {
        cout << "Hamster::comer()" << endl;
    }

    void dormir() override {
        cout << "Hamster::dormir()" << endl;
    }
};

// Clase derivada: Capibara
class Capibara : public Roedor {
public:
    void roer() override {
        cout << "Capibara::roer()" << endl;
    }

    void comer() override {
        cout << "Capibara::comer()" << endl;
    }

    void dormir() override {
        cout << "Capibara::dormir()" << endl;
    }
};

int main() {
    // Crear punteros a Roedor
    Roedor* raton = new Raton();
    Roedor* gerbo = new Gerbo();
    Roedor* hamster = new Hamster();
    Roedor* capibara = new Capibara();

    // Llamar a los métodos de los roedores a través de los punteros
    raton->roer();
    raton->comer();
    raton->dormir();

    gerbo->roer();
    gerbo->comer();
    gerbo->dormir();

    hamster->roer();
    hamster->comer();
    hamster->dormir();

    capibara->roer();
    capibara->comer();
    capibara->dormir();

    // Liberar la memoria de los punteros
    delete raton;
    delete gerbo;
    delete hamster;
    delete capibara;

    return 0;
}
