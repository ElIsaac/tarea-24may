//: C14:NameHiding.cpp
// Hiding overloaded names during inheritance
#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    void g() {}
    int f() const
    {
        cout << "Base::f()\n";
        return 1;
    }
    int f(string) const
    {
        return 1;
    }
    void h(int x)
    {
        cout << "Base::h(int): " << x << endl;
    }

    void h(double x)
    {
        cout << "Base::h(double): " << x << endl;
    }

    void h()
    {
        cout << "Base::h(): " << endl;
    }
};
class Derived1 : public Base
{
public:
    void g() const {}
    void h(){
        cout << "Derivated1::h()" << endl;
    }
};

class Derived2 : public Base
{
public:
    // Redefinition:
    int f() const
    {
        cout << "Derived2::f()\n";
        return 2;
    }
};

class Derived3 : public Base
{
public:
    // Change return type:
    void f() const { cout << "Derived3::f()\n"; }
};

class Derived4 : public Base
{
public:
    // Change argument list:
    int f(int) const
    {
        cout << "Derived4::f()\n";
        return 4;
    }
};

int main()
{
    string s("hello");
    Derived1 d1;
    d1.h();
    Derived2 d2;
    d2.Base::h();
} ///:~