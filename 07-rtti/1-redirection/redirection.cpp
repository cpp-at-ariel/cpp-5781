/**
 * Demonstrates the difference between cout and cerr,
 *   and the bash output redirection methods.
 */

#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

const int WAIT_TIME=0;

int main() {
	cout << "Start " << endl;
	cout << "The result is 2 ";
	// this_thread::sleep_for(chrono::seconds(WAIT_TIME));
	cout << endl;
	// this_thread::sleep_for(chrono::seconds(WAIT_TIME));
	cout << "The result is 3 " << endl;
	cerr << "There is a bug ";
	this_thread::sleep_for(chrono::seconds(WAIT_TIME));
	cerr << endl;
	cout << "The result is 4 " << endl;
	return 0;
}