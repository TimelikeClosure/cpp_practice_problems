#include <iostream>
#include "./factorial_trailing_zeroes.hpp"
#include "../../tester/tester.hpp"

int main(){
    const auto testName = "factorialTrailingZeroes(50)";

    unsigned int
        expected = 8,
        actual = problem::factorialTrailingZeroes(50);

    std::cout << testName << std::endl;
    std::cout << "Expected: " << expected << std::endl;
    std::cout << "Actual: " << actual << std::endl;

    return 0;
}