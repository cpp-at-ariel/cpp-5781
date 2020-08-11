/**
 * Function template example
 * 
 * @author Erel Segal-Halevi
 * @since 2018-04
 */

#include <iostream>
#include <vector>
using namespace std;

// template<typename T, typename R, typename X>
template<typename T, typename R>
T sum (T a, R b) {
	return a+b;
}

template<typename T>
void print(vector<vector<T>> matrix) {
	cout << "print "  << typeid(T).name() << endl;
}


int main() {
	cout << sum(5,6) << endl;
	cout << sum(5.0,6.2)  << endl;
	cout << sum(string("abc"),string("def")) << endl;

	vector<vector<vector<int>>> v;
	print(v);
}
