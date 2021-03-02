#include "Factorial.hpp"
#include <stdexcept>


int factorial(int number) { 
    if (number<0) {
        throw std::out_of_range{"negative input"};
    }
    int result = 1;
    for (int i=1; i<=number; ++i) {
        result = result*i;
    }
    return result;
}
