#include "doctest.h"
#include "Factorial.hpp"

TEST_CASE("Factorials of small numbers") {
    CHECK(factorial(0) == 1);
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
}


TEST_CASE("Factorials of large numbers") {
    CHECK(factorial(10) == 3628800);

    auto f3 = factorial(3);
    CHECK((f3==5 || f3==6)); // logic OR requires parentheses!

    /* add more checks here */
}

/* add more test cases here */
