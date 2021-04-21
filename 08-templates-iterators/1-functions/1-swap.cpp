/**
 * Function template example: swap
 * 
 * @author Erel Segal-Halevi
 * @since 2018-04
 */

#include <iostream>
#include <map>
using std::cout, std::cerr, std::endl;
// Don't use namespace std, since it brings std::swap!


template <typename T> void swap(T& a, T& b) {
	cout << "swap Ts" << endl;
	T tmp = a;
	a = b;
	b = tmp;
}

void swap (double& a, double& b) {
	cout << "swap doubles" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
}


int main() {
	{   // swap ints:
		cout << endl;
		int a=4,b=5;
		cout << a << " " << b << endl;
		swap(a,b);
		cout << a << " " << b << endl;
	}

	{   // swap doubles:
		cout << endl;
		double a=4.1,b=5.1;
		cout << a << " " << b << endl;
		swap(a,b);
		cout << a << " " << b << endl;
		swap<double>(a,b);
		cout << a << " " << b << endl;
	}
	{   // try to swap double and int:
		cout << endl;
		double a=4.1; int b=5;
		cout << a << " " << b << endl;
		// swap(a,b);  // compile error
	}

	{   // try to swap ostream:
		// swap(cout, cerr);     // compile error
	}
}