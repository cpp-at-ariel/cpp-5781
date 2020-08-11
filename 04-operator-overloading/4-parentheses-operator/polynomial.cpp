/**
 * Demo of the Functor objects.
 * 
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * Represents a polynomial of degree 2: ax^2 + bx + c
 */
class Polynomial2 {
		double _a,_b,_c;
	public:
		Polynomial2(double a): 
			_a(a), _b(0), _c(0)			{  }
		Polynomial2(double a, double b, double c): 
			_a(a), _b(b), _c(c)			{  }
		double operator() (double x) { 
			return _a*x*x + _b*x + _c; }

		double operator()() { 
			return 0; }


		// double getValue(double x) {   // Java style
		// 	return _a*x*x + _b*x + _c; }
};

int maximize(Polynomial2 p, int from, int to) {
	int result = -INT32_MAX;
	for (int i=from; i<=to; ++i) {
		if (p(i) > result)
			result = p(i);
	}
	return result;
}


int main() {
	Polynomial2 poly1(2,3,4);
	cout << "poly1(5) = " << poly1(5) << endl; // prints 69
	cout << "Polynomial2(2,3,4)(5) = " << Polynomial2(2,3,4)(5) << endl; // prints 69
	cout << "poly1() = " << poly1() << endl; // prints 0

	Polynomial2 poly2(5);
	cout << "poly2(5) = " << poly2(5) << endl; 
	cout << "Polynomial2(2)(5) = " << Polynomial2(5)(5) << endl; // prints 69

	return 0;
}
