#include <iostream>

using namespace std;

class A
{
    int i;

public:
    A(int ii) : i(ii) {}
    virtual ~A() {}
    virtual void f() const {
        cout << "A::f()" << endl;
    }
};

class B
{
    int i;

public:
    B(int ii) : i(ii) {}
    virtual ~B() {}
    virtual void f() const {
        cout << "B::f()" << endl;
    }
};

class C : public B
{
    A a;

public:
    C(int ii) : B(ii), a(ii) {}
    ~C() {} // Calls ~A() and ~B()
    void f() const
    { // Redefinition
        a.f();
        B::f();
    }
};

int main()
{
    C c(47);
    B* b = &c; // Upcast
    b->f(); // Call virtual function


    return 0;
}
