#include <iostream>

using namespace std;

class Padre {
public:
    Padre() {
        cout << "Padre::Padre()" << endl;
        funcionVirtual();
    }

    virtual void funcionVirtual() {
        cout << "Padre::funcionVirtual()" << endl;
    }
};

class Hijo : public Padre {
public:
    Hijo() {
        cout << "Hijo::Hijo()" << endl;
        funcionVirtual();
    }

    void funcionVirtual() override {
        cout << "Hijo::funcionVirtual()" << endl;
    }

    void llamarFuera(){
        funcionVirtual();
    }
};

int main() {
    Hijo* hp = new Hijo();
    cout << endl;
    hp->llamarFuera();

    delete hp;
    return 0;
}
