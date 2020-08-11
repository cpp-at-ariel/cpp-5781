#include <iostream>
using namespace std;

struct A {
	virtual void f() = 0;
};

struct B: public A {
	virtual void g(){}
};

struct C: public B {
	void f() {};
};


int main(){
	A a;
	B b;
	C c;
}
