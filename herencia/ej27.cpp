#include <iostream>

// Clase base Subject
class Subject {
public:
    virtual void f() = 0;
    virtual void g() = 0;
    virtual void h() = 0;
};

// Clase Proxy
class Proxy : public Subject {
private:
    Subject* subject;

public:
    Proxy(Subject* subj) : subject(subj) {}

    void f() {
        subject->f();
    }

    void g() {
        subject->g();
    }

    void h() {
        subject->h();
    }
};

// Clase Implementation1
class Implementation1 : public Subject {
public:
    void f() {
        std::cout << "Implementation1::f()" << std::endl;
    }

    void g() {
        std::cout << "Implementation1::g()" << std::endl;
    }

    void h() {
        std::cout << "Implementation1::h()" << std::endl;
    }
};

// Clase Implementation2
class Implementation2 : public Subject {
public:
    void f() {
        std::cout << "Implementation2::f()" << std::endl;
    }

    void g() {
        std::cout << "Implementation2::g()" << std::endl;
    }

    void h() {
        std::cout << "Implementation2::h()" << std::endl;
    }
};

int main() {
    Implementation1 im1;
    Implementation2 im2;

    Proxy proxy1(&im1);
    proxy1.f();
    proxy1.g();
    proxy1.h();

    Proxy proxy2(&im2);
    proxy2.f();
    proxy2.g();
    proxy2.h();

    return 0;
}
