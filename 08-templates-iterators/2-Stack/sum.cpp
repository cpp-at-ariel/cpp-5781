/**
 * Illustrates how to call a sum function with iterators.
 * 
 * Author: Erel Segal-Halevi
 * Since: 2020-04
 */


#include <iostream>
using namespace std;
#include "sum.hpp"    // Writing this file is left as an exercise :-)

struct MyClass {
	MyClass& operator+=(const MyClass& other) {
		// do some adding...
		return *this;
	}
};

void operator+=(int i, const MyClass& other) {
	
}

int main() {
	int arr[4] {1,2,3,4};
	cout << sum(begin(arr),end(arr),0) << endl;

	MyClass arr2[4];
	sum(begin(arr2), end(arr2), 0);
}
