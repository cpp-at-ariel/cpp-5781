/**
 * This program contains some issues that are detected by clang-tidy.
 * 
 * Run `make tidy` to find out.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Each student should submit " << 12 << " exercises." << endl;

    int submission_count = 11;
    if (submission_count >= 12)
        cout << "OK!"  << endl;
    else 
        cout << "Try again." << endl;

    string submission_names[3] = {"a", "b", "c"};
    cout << submission_names[0] << endl;
    return 0;
}

