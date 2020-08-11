/**
 * This is a "hello world" program for the C++ course.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << endl << "Hello " << name << "!" << endl;
    cout << (1 << 5) << endl;
    auto i = "abc";
    return 0;
}
