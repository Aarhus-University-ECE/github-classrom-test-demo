#include <catch2/catch_test_macros.hpp>


extern "C" {
    #include "utils.h"
}

// int main() {
TEST_CASE( "Sum numbers", "[sum]" ) {
    REQUIRE(sum(1, 2, 3, 4) == 10);
    
    REQUIRE(sum(-8, 2, 3, 4) == 1);
    REQUIRE(sum(1, 2, 3, -4) == 2);
}

// }
