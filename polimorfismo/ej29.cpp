#include <iostream>
using namespace std;

class X {
public:
    X() {
        funcionVirtual();
    }
    
    virtual void funcionVirtual() {
        cout << "X::funcionVirtual()" << endl;
    }
    
    virtual ~X() {}
};

class Y : public X {
public:
    Y() : X() {
        funcionVirtual();
    }
    
    void funcionVirtual() override {
        cout << "Y::funcionVirtual()" << endl;
    }
};

int main() {
    X* x = new Y();
    x->funcionVirtual();  // Llamada polimórfica a la función virtual
    delete x;
    return 0;
}
