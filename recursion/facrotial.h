int factorialRecursion(const int n)
{
    if (n == 0 || n == 1)
        return 1;
    return factorialRecursion(n - 1) * n;
}
int factorialLoop(const int n)
{
    if (n == 0 || n == 1)
        return 1;
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}
