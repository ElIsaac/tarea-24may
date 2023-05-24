#include <iostream>
#include <string>
#include <vector>

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
    
    vector<Roedor*> roedores;

    roedores.push_back(new Raton());
    roedores.push_back(new Gerbo());
    roedores.push_back(new Hamster());
    roedores.push_back(new Capibara());


    roedores[0]->roer();
    roedores[0]->comer();
    roedores[0]->dormir();

    roedores[1]->roer();
    roedores[1]->comer();
    roedores[1]->dormir();

    roedores[2]->roer();
    roedores[2]->comer();
    roedores[2]->dormir();

    roedores[3]->roer();
    roedores[3]->comer();
    roedores[3]->dormir();

    delete roedores[0];
    delete roedores[1];
    delete roedores[2];
    delete roedores[3];

    roedores.clear();

    return 0;
}
