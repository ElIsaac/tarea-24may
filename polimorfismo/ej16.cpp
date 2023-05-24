//: C15:VirtualsInDestructors.cpp
// Virtual calls inside destructors
#include <iostream>
using namespace std;
class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base1()\n";
        f();
    }
    virtual void f() { cout << "Base::f()\n"; }
};
class Derived : public Base
{
public:
    ~Derived() { cout << "~Derived()\n"; }
    void f() { cout << "Derived::f()\n"; }
};

class Derived2 : public Derived
{
public:
    ~Derived2() { cout << "~Derived2()\n"; }
    void f() { cout << "Derived2::f()\n"; }
};


int main()
{
    Base *d = new Derived2; // Upcast
    delete d;
} ///:~