
#include <iostream>
#include <vector>
#include <string>
using namespace std;


template<typename Container, typename BoolContainer>
void test(Container container, BoolContainer v) {
    static_assert(is_integral<typename BoolContainer::value_type>::value, "BoolContainer must be of integral type");
}

int main() {
    vector<int> vi(4);
    vector<bool> vb(4);
    cout << is_integral<typename decay<decltype(vi[0])>::type>::value << endl;
    cout << is_integral<typename decay<decltype(vb[0])>::type>::value << endl;
    cout << is_integral<typename vi::value_type>::value << endl;
    cout << is_integral<typename vb::value_type>::value << endl;

    test(string("abcd"), vector<int>{});
    test(string("abcd"), vector<bool>{});
    // test(string("abcd"), vector<char*>{});
}

