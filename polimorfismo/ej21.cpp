//: C14:Order.cpp
// Constructor/destructor order
#include <fstream>
#include <iostream>
using namespace std;
#define CLASS(ID)                                         \
    class ID                                              \
    {                                                     \
    public:                                               \
        ID(int) { cout << #ID " constructor\n"; }          \
        virtual void print() { cout << "print macro" << endl; } \
        virtual ~ID() { cout << #ID " destructor\n"; }     \
    };
CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);
class Derived1 : public Base1
{
    Member1 m1;
    Member2 m2;

public:
    Derived1(int) : m2(1), m1(2), Base1(3)
    {
        cout << "Derived1 constructor\n";
    }
    virtual void print() override
    {
        cout << "print Derived1\n";
    }
    ~Derived1()
    {
        cout << "Derived1 destructor\n";
    }
};
class Derived2 : public Derived1
{
    Member3 m3;
    Member4 m4;

public:
    Derived2() : m3(1), Derived1(2), m4(3)
    {
        cout << "Derived2 constructor\n";
    }
    virtual void print() override
    {
        cout << "print Derived2\n";
    }
    ~Derived2()
    {
        cout << "Derived2 destructor\n";
    }
};

void mostrar(Base1& b){
    b.print();
}
int main()
{
    Derived2 d2;

    cout << endl;
    mostrar(d2);
    cout << endl;
} ///:~