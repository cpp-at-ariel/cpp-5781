#include "Factorial.hpp"
#include <stdexcept>


int factorial(int number) { 
    if (number<0)
        throw std::invalid_argument("Argument to factorial must be non-negative");

    return number <= 1?
        number:
        factorial(number - 1) * number; 
}
