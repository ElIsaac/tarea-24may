//: C15:Early.cpp
// Early binding & virtual functions
#include <iostream>
#include <string>

using namespace std;

class Pet{
    public:
        virtual string speak()=0;
};

class Dog : public Pet{
    public:
        string speak() override { return "Bark!"; }
};


int main()
{
    Dog ralph;
    Pet *p1 = &ralph;
    Pet &p2 = ralph;
    //Pet p3; eerrrr
    // Late binding for both:
    cout << "p1->speak() = " << p1->speak() << endl;
    cout << "p2.speak() = " << p2.speak() << endl;
    // Early binding (probably):cout << "p3.speak() = " << p3.speak() << endl;
} ///:~