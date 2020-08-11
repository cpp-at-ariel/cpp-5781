#include "Stk.hpp"

#include <string>
#include <iostream>
using namespace std;



int main() {
	Stk<string>  strStk;
	strStk.push("world!");
	strStk.push("Hello");

	// for (const string& val: strStk) {


	for (Stk<string>::iterator i=strStk.begin(); i!=strStk.end(); ++i) {
		string val = *i;
		cout << val << endl;
	}
	return 0;
}
