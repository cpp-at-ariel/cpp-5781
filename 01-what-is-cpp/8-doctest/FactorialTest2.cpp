#include "doctest.h"
#include "Factorial.hpp"
#include <stdexcept>

TEST_CASE("Factorials of negative numbers") { 
    CHECK_THROWS(factorial(-1));  // check that some exception is thrown
    CHECK_THROWS_AS(factorial(-2), std::out_of_range);  // check that a specific exception type is thrown
    CHECK_THROWS_AS(factorial(-2), std::exception);  // check that a specific exception type (or a descendant) is thrown
}

/* add more test cases here */
