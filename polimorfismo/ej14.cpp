//: C15:AddingVirtuals.cpp
// Adding virtuals in derivation
#include <iostream>
#include <string>
using namespace std;

class Pet {
    string pname;

public:
    Pet(const string& petName) : pname(petName) {}
    virtual ~Pet() {} // Add a virtual destructor for polymorphic behavior
    virtual string name() const = 0;
    virtual string speak() const = 0;
};

class Dog : public Pet {
    string dogName;

public:
    Dog(const string& petName) : Pet(petName), dogName(petName) {}
    // New virtual function in the Dog class:
    string name() const override {
        return dogName;
    }
    string sit() const {
        return dogName + " sits";
    }
    string speak() const override { // Override
        return dogName + " says 'Bark!'";
    }
};

int main() {
    Pet* p[2] = { new Dog("generic"), new Dog("bob") };

    cout << "p[0]->speak() = " << p[0]->speak() << endl;
    cout << "p[1]->speak() = " << p[1]->speak() << endl;

    delete p[0]; 
    delete p[1];

    return 0;
}
