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
	// ofstream cout2("out2.txt");
	return 0;
}