#include <iostream>

namespace tester {
    bool assert(char testName[], unsigned int expected, unsigned int actual){
        if (actual == expected){
            std::cout << "PASSED - " << testName << " = " << expected << std::endl;
            return true;
        } else {
            std::cout << "FAILED - " << testName << " = " << expected << std::endl;
            std::cout << "Actual output: " << actual << std::endl;
            return false;
        }
    }
}