#include <iostream>

using namespace std;

class Padre {
public:
    Padre() {
        cout << "Constructor de Padre" << endl;
    }

    ~Padre() {
        cout << "Destructor de Padre" << endl;
    }
};

class Hijo : public Padre {
public:
    Hijo() {
        cout << "Constructor de Hijo" << endl;
    }

    ~Hijo() {
        cout << "Destructor de Hijo" << endl;
    }
};

class Nieto : public Hijo {
public:
    Nieto() {
        cout << "Constructor de Nieto" << endl;
    }

    ~Nieto() {
        cout << "Destructor de Nieto" << endl;
    }
};

int main() {
    Nieto n;
    return 0;
}

