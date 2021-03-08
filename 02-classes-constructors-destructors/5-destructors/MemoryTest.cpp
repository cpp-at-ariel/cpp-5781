/**
 * To run the demo, open "top" in another window,
 * or run ../../cpp-5781/01-what-is-cpp/1-memory-cpp-vs-java/show-memory
 * 
 * Then, run this program and watch the changes in the free memory.
 * 
 * 
 * @author Erel Segal-Halevi
 * @since  2018-03
 */
#include "units/IntList.hpp"

#include <iostream>
using namespace std;

#include <thread>
#include <chrono>
#include <vector>
constexpr int SIZE=100000*1024; // 400,000 KB
constexpr int TIME=5; // seconds

int main() {
    cout << "Before loop" << endl;
    this_thread::sleep_for(chrono::seconds(TIME));

    IntList* p = new IntList(10);
    for (uint i=0; i<5; ++i) {
        cout << "Before list construction" << endl;
        this_thread::sleep_for(chrono::seconds(TIME));

        // This is freed automatically:
        IntList list(SIZE);
        cout << list.get(5) << endl;
        list.fill(9);
        cout << list.get(5) << endl;
        list.put(5, 100);
        cout << list.get(5) << endl;

        // This is NOT freed automatically:
        // IntList* pList = new IntList(SIZE);
        // pList->fill(9);

        cout << "After list construction" << endl;
        this_thread::sleep_for(chrono::seconds(TIME));
    }

    cout << "After loop" << endl;
    this_thread::sleep_for(chrono::seconds(TIME));

    IntList* listArray = new IntList[10] {100,100,100,100,100,100,100,100,100,100};
    return 0;
}
