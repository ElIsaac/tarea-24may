#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    virtual string speak() const { return ""; } // La función es virtual
};

class Dog : public Pet {
public:
    string speak() const { return "Bark!"; }
};

int main() {
    Dog ralph;
    Pet* p1 = &ralph;
    Pet& p2 = ralph;
    Pet p3;

    cout << "p1->speak() = " << p1->speak() << endl; // Ligadura dinámica
    cout << "p2.speak() = " << p2.speak() << endl;   // Ligadura dinámica
    cout << "p3.speak() = " << p3.speak() << endl;   // Ligadura dinámica

    /*

    //hacer speak no virtual
    Dog d;
    Pet* p = &d;

    cout << p->speak() << endl; //estatica
    
    */
    

    return 0;
}
