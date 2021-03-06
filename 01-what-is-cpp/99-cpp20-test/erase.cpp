/**
 * Testing the std::erase function, which was added in C++ 20.
 * Date: 2021-03
 */

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s = "a b c d ";
	std::erase(s, ' ');
	cout << s << endl;
}
