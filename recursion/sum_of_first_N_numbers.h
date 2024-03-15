int sumOfFirstNaturalNumberRecursion(int n)
{
    if (n == 0)
        return 0;
    else
        return sumOfFirstNaturalNumberRecursion(n - 1) + n;
}

int sumOfFirstNaturalNumberLoop(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    return sum;
}

int sumOfFirstNaturalNumberEquation(int n)
{
    return n * (n + 1) / 2;
}