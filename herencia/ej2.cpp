/*
 Crear dos clases, A y B, con constructor por defectos notificándose ellos mis-
mos. Una nueva clase llamada C que hereda de A, y cree un objeto miembro B
dentro de C, pero no cree un constructor para C. Cree un objeto de la clase C y
observe los resultados.
 */

#include <iostream>
using namespace std;

class A {
	public:
		A(){
			cout << "A"<<endl;
		}

};

class B {
	public:
		B(){ 
			cout << "B"<<endl;
		}
};

class C : public  A {
	public:
	B b;

};

int main (){
	C c;
	return 0;
}
