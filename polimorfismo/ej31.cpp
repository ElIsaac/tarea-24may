#include <iostream>
using namespace std;

class Padre {
public:
    virtual void print() {
        cout << "Padre::print()" << endl;
    }
};

class Padre2{
public:
    virtual void a() {
        cout << "Padre2::a()" << endl;
    }
};

class Hijo : public Padre, Padre2 {
public:
    void print() override {
        cout << "Hijo::print()" << endl;
    }
    void a() override {
        cout << "Hijo::a()" << endl;
    }
};

class Diferente {
public:
    void print() {
        cout << "Diferente::print()" << endl;
    }
};

int main() {
    Padre p;
    Diferente d;
    Hijo h;
    
    cout << "Tamaño del VPTR con una herencia: " << sizeof(p) - sizeof(d) << " bytes" << endl;
    cout << "Tamaño del VPTR con dos herencias: " << sizeof(h) - sizeof(d) << " bytes" << endl;
    return 0;
}
