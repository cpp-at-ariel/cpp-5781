#include <iostream>
using namespace std;
#include "sum.hpp"

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
