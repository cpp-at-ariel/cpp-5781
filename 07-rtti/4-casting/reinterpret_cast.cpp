#include <iostream>
#include <iomanip>
using namespace std;


struct Shape {
	int i=555;
	void print() { cout << i << endl; }
};

struct Circle: public Shape {
	char c='a';
	void print() { cout << i << " " << c << endl; }
};

struct Unrelated {
	double d=1.234;
	void print() { cout << d << endl; }
};

/*
struct char8 {
	char c[8];
};
*/

int main()
{	
	{
		int i=5;   // 10100000 00000000 00000000 00000000 ???????? ???????? ???????? ????????

		int* ip = &i;
		double* dp = (double*)ip;
		double* ep = reinterpret_cast<double*>(ip);
		cout << setprecision(100) << *dp << " " << *ep << endl;        // garbage garbage

		int* jp = reinterpret_cast<int*>(ep);
		cout << *ip << " " << *jp << endl;        // garbage garbage

		// double& dr = d;
		// int& ir = (int&)d;
		// int& jr = reinterpret_cast<int&>(d);
		// cout << ir << " " << jr << endl;        // garbage garbage
		// cout << "---" << endl;
	}

	{
		Shape shape1;
		Circle circle1;
		//d = reinterpret_cast<Circle>(b); // compile error
		//b = reinterpret_cast<Shape>(d); //compile error

		Shape* pshape;
		Circle* pcircle;
		Unrelated* punrelated;

		pshape = reinterpret_cast<Shape*>(new Circle);
		pshape->print();  // OK
		pshape = reinterpret_cast<Shape*>(new Unrelated);
		pshape->print();  // garbage

		cout << "---" << endl;

		pcircle = reinterpret_cast<Circle*>(pshape);  //  same garbage
		pcircle->print();
		pcircle = reinterpret_cast<Circle*>(new Shape);  //  555 garbage
		pcircle->print();
		pcircle = reinterpret_cast<Circle*>(new Unrelated);  // garbage
		pcircle->print();
		cout << "---" << endl;

		punrelated = reinterpret_cast<Unrelated*>(new Shape); // garbage
		punrelated->print();
		punrelated = reinterpret_cast<Unrelated*>(new Circle); // garbage
		punrelated->print();
	}
}
