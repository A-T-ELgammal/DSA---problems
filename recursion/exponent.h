#include <iostream>
// o(n) space-o(n)
int powerRecursion1(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent > 0)
        return powerRecursion1(base, exponent - 1) * base;
    throw std::invalid_argument("exponent must be 0 or greater");
}
// same with loop
int powerLoop1(int base, int exponent)
{
    if (exponent == 0 || exponent == 1)
        return 1;
    int result = 1, i = 1;
    while (i <= exponent)
    {
        result *= base;
        i++;
    }
    return result;
}

// simpler way
// o(log n) space-o(log n)
int powerRecursion2(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent % 2 == 0)
        return powerRecursion2(base * base, exponent / 2);
    else
        return powerRecursion2(base * base, (exponent - 1) / 2) * base;
    throw std::invalid_argument("exponent must be 0 or greater");
}

// same with loop
// o(log n)
int powerLoop2(int base, int exponent)
{
    int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result *= base;
        base *= base;
        exponent /= 2;
    }
    return result;
}