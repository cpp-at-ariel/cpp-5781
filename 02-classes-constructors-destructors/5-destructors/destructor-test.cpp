/**
 * Demonstrates what happens when an object is destructed twice.
 * 
 * @author Erel Segal-Halevi
 * @since  2018-03
 */
#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int x)  {this->x=x; cout<<"c "<<x<< endl;}
    ~Test() {cout<<"d "<<x << endl;}
};

/* Option
Test::~Test() {
    cout<<"d "<<x << endl;
}
*/

Test f () {
    return Test(99);    
}

void g (Test t) {
}

Test& h() {
    Test t(88);
    return t;
}


int main() {
    cout << "1" << endl;
    Test* plist = new Test(10);
    {
        Test list0(5);
        cout << "in scope" << endl;
        //Test* p = &list0;
        //delete p;
    }
    cout << "2" << endl;
    delete plist;

    cout << "3" << endl;
    Test t1(555);
    Test t2 = f();
    cout << "4" << endl;
    g(Test(67));
    cout << "5" << endl;
    cout << h().x << endl;
    Test array[5] {11, 22, 33, 44, 55};
}
