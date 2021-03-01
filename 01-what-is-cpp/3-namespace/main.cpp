#include <iostream>
using namespace std;

#include "namespace.hpp"

void printx() {
	cout << 5 << endl;
}

int main() {
	printx();  
	abc::printx(); 
}
