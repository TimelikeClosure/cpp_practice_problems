#include "./factorial_trailing_zeroes.hpp"
#include "../../tester/tester.hpp"

int main(){
    char testName[] = "factorialTrailingZeroes(50)";

    unsigned int
        expected = 12,
        actual = problems::factorialTrailingZeroes(50);

    tester::assert(testName, expected, actual);

    return 0;
}