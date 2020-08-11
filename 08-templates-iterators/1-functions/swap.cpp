/**
 * Function template example
 * 
 * @author Erel Segal-Halevi
 * @since 2018-04
 */

#include <iostream>
using std::cout;
using std::endl;
using std::string;

template<typename T, typename R>
T sum (T a, R b) {
	// f(a);  // compilation error
	return a+b;
}

// int sum_char_pointer(const char* a, const char* b) {
// 	return a+b;
// }

// int sum_int(int a, int b) {
// 	f(a);
// 	return a+b;
// }

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

class DontCopyMe {
public:
	DontCopyMe() {}
	DontCopyMe(const DontCopyMe& other) = delete;
};



int main() {
	cout << sum(5,6) << endl;
	cout << sum(5.0,6.2)  << endl;
	cout << sum(string("abc"),string("def")) << endl;
	cout << sum("abc","def") << endl;
	{
		int a=4,b=5;
		cout << a << " " << b << endl;
		swap(a,b);
		cout << a << " " << b << endl;
	}

	{
		double a=4.1,b=5.1;
		cout << a << " " << b << endl;
		swap(a,b);
		cout << a << " " << b << endl;
		swap<double>(a,b);
		cout << a << " " << b << endl;
	}
	{
		double a=4.1; int b=5;
		cout << a << " " << b << endl;
		// swap(a,b);
	}

	{
		DontCopyMe a, b;
		swap(a,b);     // compiler error
	}
}
