/**
 * Using template-class-specialization to create type-information
 * 
 * @author ?
 * @url    ?
 */

#include <iostream>
#include <cassert>
using namespace std;


template<typename T> struct is_numeric {
	static const bool value = false;
};

template<>    struct is_numeric<int> {
	static const bool value = true;
};

template<>    struct is_numeric<double>  {
	static const bool value = true;
};

template<typename T> T add(T a, T b) {
    // static_assert(is_numeric<T>::value, "Can only be numeric type");  // Creates a compile-time error
	// assert(is_numeric<T>::value);  // Creates a run-time error
	//if (typeid(T).name()=='f'||typeid(T).name()=='d'||typeid(T).name()=='i')
	return a+b;
}


template<typename T> T div(T a, T b) {
    static_assert(is_numeric<T>::value, "Can only be numeric type");  // Creates a compile-time error
	assert(b!=0);                                                     // Creates a run-time error
	return a/b;
}



class A {
	static const int i=5;
};

int main() {
	cout << boolalpha;

    cout << is_numeric<int>::value << endl;
    cout << add(1,2) << '\n';

	double f = 1.2;
	cout << add(f,f) << endl;

	cout << is_numeric<char>::value << endl;
    //cout << add('a','b') << '\n';
}
