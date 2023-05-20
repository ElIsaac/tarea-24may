#include <iostream>

using namespace std;

class A {
    int i;

public:
    A(int ii) : i(ii) {
        cout << "Constructor A" << endl;
    }

    ~A() {
        cout << "Destructor A" << endl;
    }

    void f() const {}
};

class B {
    int i;

public:
    B(int ii) : i(ii) {
        cout << "Constructor B" << endl;
    }

    ~B() {
        cout << "Destructor B" << endl;
    }

    void f() const {}
};

class C : public B {
    A a;

public:
    C(int ii) : B(ii), a(ii) {
        cout << "Constructor C" << endl;
    }

    ~C() {
        cout << "Destructor C" << endl;
    }

    void f() const {
        a.f();
        B::f();
    }
};

class D : public C {
    

public:
    D(int ii) : C(ii) {
        cout << "Constructor D" << endl;
    }

    ~D() {
        cout << "Destructor D" << endl;
    }

    void f() const {
        C::f();
    }
    B b;
};

int main() {
    D d(47);
    d.f();
    return 0;
}

