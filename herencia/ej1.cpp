/*Car.cpp para que herede desde una clase llamada Vehicle, colocando
correctamente las funciones miembro en Vehicle (esto es, añadir algunas funciones miembro). Añada un constructor (no el de por defecto) a Vehicle, que
debe ser llamado desde dentro del constructor Car

*/
//: C14:Car.cpp
// Public composition
#include <iostream>
using namespace std;
class Engine
{
public:
	void start() const {
		cout << "Start"<<endl;
	}
	void rev() const {

	}
	void stop() const {
		cout << "stop"<<endl;
	}
};
class Wheel
{
public:
	void inflate(int psi) const {
		cout << "inflate "<< psi <<endl;
	}
};
class Window
{
public:
	void rollup() const {
		cout << "rollup"<<endl;
	}
	void rolldown() const {
		cout << "rolldown"<<endl;
	}
};
class Door
{
public:
    Window window;
    void open() const {}
    void close() const {}
};
class Vehicle {
public:
    Engine engine;
    Wheel wheel[4];
    Door left, right;

    Vehicle() { // Constructor de Vehicle
        engine.start();
    }

    

    void stop() const { // Heredada de Engine
        engine.stop();
	left.window.rollup();
	right.window.rollup();
    }
};

class Car : public Vehicle {
public:


    Car() : Vehicle() { 
    }
};

int main() {
    Car car;
    car.wheel[0].inflate(72);
    
    car.stop(); // Función miembro heredada de Vehicle
}

