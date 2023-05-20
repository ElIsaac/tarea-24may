#include <iostream>
using namespace std;
class A {
  int i;

 public:
  A(int ii) : i(ii) {
	  cout << "constructor A" << endl;
  }
  ~A() {
	  cout << "destructor A" << endl;
  }
  void f() const {}
};



class B {
  int i;

 public:
  B(int ii) : i(ii) {
	  cout << "constructor B" << endl;
  }
  ~B() {
	  cout << "destructor B" << endl;
  }
  void f() const {}
};



class C : public B {
  A a;
 public:
  C(int ii) : B(ii), a(ii) {
	  cout << "constructor C" << endl;
  }
  ~C() {
	  cout << "deastructor C" << endl;
  }           // Calls ~A() and ~B()
  void f() const {  // Redefinition
    a.f();
    B::f();
  }
};



class D : public B {
	int i;
	public:
		C c;
		D(int ii): B(ii), c(ii){
		cout << "constructor D" << endl;
		}
		~D(){
			cout << "destructor D" << endl;
		}

};


int main() { D d(47); }  ///:~
