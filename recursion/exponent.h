#include <iostream>
// o(n) space-o(n)
int powerRecursion1(int m, int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return powerRecursion1(m, n - 1) * m;
    throw std::invalid_argument("n must be 0 or greater");
}
// same with loop
int powerLoop1(int m, int n)
{
    if (n == 0 || n == 1)
        return 1;
    int mul = 1, i = 1;
    while (i <= n)
    {
        mul *= m;
        i++;
    }
    return mul;
}

// simpler way
// o(log n) space-o(log n)
int powerRecursion2(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return powerRecursion2(m * m, n / 2);
    else
        return powerRecursion2(m * m, (n - 1) / 2) * m;
    throw std::invalid_argument("n must be 0 or greater");
}
// same with loop
