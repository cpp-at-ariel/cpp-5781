/**
 * Demonstrates the difference between cout and cerr,
 *   and the bash output redirection methods.
 */

#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
	cout << "The result is 2 " << endl;
	cout << "The result is 3 " << endl;
	cerr << "There is a bug " << endl;
	cout << "The result is 4 " << endl;
	return 0;
}