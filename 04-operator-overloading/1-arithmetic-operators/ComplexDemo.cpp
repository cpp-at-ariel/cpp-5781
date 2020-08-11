/**
 * @author Ofir Pele
 * @since 2017
 */

#include "Complex.hpp"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
#include <assert.h>

int main(int argc, char **argv) {
    cout << "Complex Demo" << endl;

    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3(3,4);

    (c1 += c2) += c3;  // c1 SHOULD get the sum c1+c2+c3 = 6+9i
    // If we return Complex& (by reference), this is equivalent to:
    // c1 += c2;              // c1 = 3 + 5i;
    // Complex& c_temp = c1;  // c_temp = c1 = 3 + 5i
    // c1 += c3;              // c1 = c_temp = 6 + 9i

    // If we return Complex (by value), this is equivalent to:
    // c1 += c2;              // c1 = 3 + 5i;
    // Complex c_temp = c1;   // c_temp = 3 + 5i
    // c_temp += c3;          // c_temp = 6 + 9i

    cout << "c1=" << c1 << "   c2=" << c2 << "  c3=" << c3 << endl;

    (c1 + c2) + c3;
    // Equivalent to:
    // Complex c_temp_1 = c1 + c2;
    // Complex c_temp_2 = c_temp_1 + c3;



    // auto a = Complex(3,2)+Complex(4,3);
    // cout << "type of a: " << typeid(a).name() << endl;

    int a=2, b=3;
    cout << (((a += b) += b)  += b) << endl;
    cout << "a = " << a << endl;

    Complex c1(1,2), c2(3), c3;
    cout << "c1 = " << c1 << " !!" << endl;

    Complex minus_c1 = -c1;
    cout << "-c1 = " << (-c1) << endl;

    c1 += c2;
    cout << "c1 = " << c1 << " !!" << endl;

    cout << boolalpha << (c1 ^ c2) << endl;
    cout << boolalpha << (c1 ^ Complex{1,2}) << endl;
    // const Complex c4(6,7);
    // cout << -c4 << endl;
    cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl << "c3 = " << c3 << endl << endl;    
    cout << ++c1 << endl;
    cout << ++++c1 << endl;
    cout << ++++++++++++++++++++c1 << endl;
    // cout << c1++++ << endl;
    cout << "c1 + c2 = " << (c1 + c2) << endl;
    cout << "c1 = " << c1 << endl;
    //cout << "c1 += c2 = " << (c1 += c2) << endl;
    cout << "c1 = " << c1 << endl << endl;
    cout << "c1 += c2 += c2 += c2 = " << (c1 += c2 += c2 += c2 += c2) << endl;
    // Complex c9 = c1+c2;
    // (c1+c2) = 5;

    cout << "c1 + 5+6i + 6+5i = " << (c1 + Complex(5,6) + Complex(6,5)) << endl;

    cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl << "c3 = " << c3 << endl << endl;

    c1.operator+=(c2); // equivalent to c1+=c2;
    cout << "c1 = " << c1 << endl;
    // Equivalent to:
    // cout << "c1 = ";
    // cout << c1;
    // cout << endl;
    cout << "c1 << cout:" << endl;
    //c1 << cout;

    cout << "-c1 = " << -c1 << endl;
    cout << "c1 = " << c1 << endl;
    //-c1 = Complex(5,6);
    cout << "-c1 = " << -c1 << endl;

    cout << "c1++ = " << c1++ << endl;
    cout << "++c1 = " << ++c1 << endl;

    // cout << "c1+c2 = " << (c1+c2) << endl;
    // cout << "c1+c2 = " << operator+(c1,c2) << endl << endl;

    // Complex c5 = c1 + c2;
    // cout << "c5 = " << c5 << endl << endl;

    // Complex c6= 42 + c1;
    // Complex c7= c1 + 42.0;
    // Complex c8= 3.0 + 2.0;
    // cout << "c6 = " << c6 << endl << "c7 = " << c7 << endl << "c8 = " << c8 << endl << endl;

    // cout << "c1 + c2*c8 = " << c1 + c2*c8 << endl << endl;
   
    // cout << "-(c1 + c2*c8)  = " << -(c1 + c2*c8) << endl << endl;
   
    // cout << "(c1+=2.0) = " << (c1+=2.0) << endl << "(c1+=c2) = " << (c1+=c2) << endl << endl;
    // cout << "(c1*=2.0) = " << (c1*=2.0) << endl << "(c1*=c2) = " << (c1*=c2) << endl << endl;

    // cout << "(c1==c2) = " << (c1==c2) << endl;
    // cout << "(c1!=c2) = " << (c1!=c2) << endl;

    // cout << "!c1 = " << (!c1) << endl;
    // cout << "!c2 = " << (!c2) << endl;
    // cout << "!c3 = " << (!c3) << endl;

    // //double d1 = c1;
    // //cout << "d1 = " << d1 << endl;

    // cout << endl;
    
    // Complex c9(4.0,-2.2);
    // Complex c10= c9;
    // Complex c11= c10;
    // Complex c12= c11;
    // Complex c13= c9;
    // cout << "(c9==c10) = " << (c9==c10) << endl;

    // cout << "c9*c10 = " << c9*c10 << endl;
    // c9*=c9;
    // cout << "c9 = "     << c9 << endl;
    // cout << "c10*c10 = "  << (c10*c10) << endl;
    // cout << "(c11*=c12) = " << (c11*=c12) << endl;
    // cout << "(c13*=c13) = " << (c13*=c13) << endl << endl;

    // // won't compile as we return const
    // //-c9= c10;
    // //cout << "c9 = "     << c9 << endl;
    // //cout << "c10 = "     << c10 << endl;
    // //(c1+c2)= c3;
    // //(c1*c2)= c3;

    // c3= c1 * c2;
    // assert (c1*c2==c3);


    cout << endl << "**** DEMONSTRATE THE INPUT OPERATOR ****" << endl;

    if (argc==2) {
        cout << "Reading a complex number from the console:" << endl;
        cout << "Before: c1 = " << c1<<endl;
        cout << "Enter a complex number: ";
        cin >> c1;
        if (!cin) {
            cout << "Error! Wrong format!" << endl;
        }
        cout << "After:  c1 = " << c1<<endl << endl;
    } else {

        cout << "Reading a complex number from a file:" << endl;
        cout << "Before: c2 = " << c2<<endl;
        ifstream fin("inputs/w2.txt");
        if (!fin) {
            cerr << "File " << argv[1] << " not open" << endl;
            return 1;
        }
        fin >> c2;
        if (!fin) {
            if (fin.bad()) {
                cout << "Fatal error with stream, quiting" << endl;
                return 1;
            }
            cout << "Error in format. You inserted: " << endl;
            char c;
            fin.clear();
            while (fin >> c) {
                cout << c;
            }
            cout << endl;
            cout << "After:  c2 = " << c2 << endl << endl;
        }

        cout << "Reading a complex number from a string:" << endl;
        cout << "Before: c3 = " << c3<<endl;
        istringstream sinput("6+li");
        sinput >> c3;
        if (!sinput) {
            cout << "Format error!" << endl;
        }
        cout << "After:  c3 = " << c3 << endl << endl;

        ostringstream soutput;
        soutput << (c1 + c2);
        assert (soutput.str()=="91+2i");
    }
    return 0;

}
