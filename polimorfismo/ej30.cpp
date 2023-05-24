#include <iostream>
using namespace std;

class Padre {
public:
    virtual void print() {
        cout << "Padre::print()" << endl;
    }
};

class Hijo : public Padre {
public:
    void print() override {
        cout << "Hijo::print()" << endl;
    }
};

void display(Padre p) {
    p.print();
}

int main() {
    Hijo h;
    display(h);

    
    return 0;
}
