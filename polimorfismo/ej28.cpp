#include <iostream>
using namespace std;

class X {
public:
    virtual void funcionVirtual() {
        cout << "X::funcionVirtual()" << endl;
    }
    virtual ~X() {}
};

class Y : public X {
    // No se declara un constructor explícito
};

int main() {
    X* x = new Y();
    x->funcionVirtual();  // Llamada polimórfica a la función virtual
    delete x;
    return 0;
}
