namespace problems {
    unsigned int factorialTrailingZeroes(unsigned long int operand){
        unsigned int zeroCount = 0;
        while (operand > 0){
            operand /= 5;
            zeroCount += operand;
        }
        return zeroCount;
    }
}