#include <catch2/catch_test_macros.hpp>

extern "C" {
    #include "utils.h"
}

// int main() {
    TEST_CASE( "Even numbers", "[even]" ) {
    REQUIRE(even(3) == false);
    REQUIRE(even(2) == true);
    REQUIRE(even(0) == true);
    REQUIRE(even(1) == false);
    
    REQUIRE(even(1273) == false);
    REQUIRE(even(1000) == true);
}


//     return 0;
// }

