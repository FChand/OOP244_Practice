
// Calculator.cpp

#include "Calculator.h"

float power(int base, int exp) {
    int i;
    float result = 1.0;
    if (exp >= 0)
    {
        for (i = 0; i < exp; i++)
            result *= base;
        return result;
    }
    else
    {
        for (i = 0; i > exp; i--)
            result /= base;
        return result;
    }
}

int exponent(float result, int base) {
    int exp = 0;
    if (result >= 1)
    {
        while (result >= base) {
            exp++;
            result /= base;
        }
    }
    else
    {
        while (result <= base) {
            exp++;
            result *= base;
        }
    }
    return exp;
}