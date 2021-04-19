/**
 * A simple program demonstrating the use of output manipulators.
 * 
 * See https://en.cppreference.com/w/cpp/io/basic_ostream/operator_ltlt.
 * 
 * @author Erel Segal-Halevi
 * @since  2021-04
 */

#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    cout << "3 > 2: " << (3 > 2) << endl;
    cout << "3 < 2: " << (3 < 2) << endl;
    cout << boolalpha;
    cout << "3 > 2: " << (3 > 2) << endl;
    cout << "3 < 2: " << (3 < 2) << endl;
    cout << noboolalpha;
    cout << "3 > 2: " << (3 > 2) << endl;
    cout << "3 < 2: " << (3 < 2) << endl;
}
