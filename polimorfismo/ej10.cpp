#include <iostream>
#include <string>

using namespace std;

// Clase base: Roedor
class Roedor {
public:
    virtual void roer()=0;

    virtual void comer()=0;

    virtual void dormir()=0;

    virtual ~Roedor() {
        cout << "Destructor de Roedor" << endl;
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

    ~Raton() {
        cout << "Destructor de Raton" << endl;
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

    ~Gerbo() {
        cout << "Destructor de Gerbo" << endl;
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

    ~Hamster() {
        cout << "Destructor de Hamster" << endl;
    }
};

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

class HamsterAzul : public Hamster {
public:
    void roer() override {
        cout << "HamsterAzul::roer()" << endl;
    }

    void comer() override {
        cout << "HamsterAzul::comer()" << endl;
    }

    void dormir() override {
        cout << "HamsterAzul::dormir()" << endl;
    }
};

int main() {
    // Roedor* roedor = new Roedor();

    Roedor* raton = new Raton();
    raton->roer();
    raton->comer();
    raton->dormir();

    Roedor* gerbo = new Gerbo();
    gerbo->roer();
    gerbo->comer();
    gerbo->dormir();

    Roedor* hamster = new Hamster();
    hamster->roer();
    hamster->comer();
    hamster->dormir();

    Roedor* capibara = new Capibara();
    capibara->roer();
    capibara->comer();
    capibara->dormir();

    delete raton;
    delete gerbo;
    delete hamster;
    delete capibara;

    return 0;
}
