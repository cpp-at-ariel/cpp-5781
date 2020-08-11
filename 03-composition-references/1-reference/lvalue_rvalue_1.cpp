/**
 * Demonstrates assigning values to references in C++.
 * @author Erel Segal-Halevi
 * @since 2018-02
 */

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    // x is an l-value

    int* px = &x;  // legal for l-value
    x = 10;        // legal for l-value
    int& r = x;    // legal for l-value

    //x+1 is an r-value
    // int* px1 = &(x+1);     // illegal for r-value
    // (x+1) = 10;            // illegal for r-value
    // int& r1 = (x+1);       // illegal for r-value
    //int* px11 = &r1;
    //r1 = 10;

    const int& r2 = (x+1);
    cout << "r2 = " << r2 << endl;
    //int* px2 = &r2;      // illegal for const reference
    //(*px2) = 10;
    //r2 = 10;             // illegal for const reference
    //int& r3 = r2;        // illegal for const reference

}
