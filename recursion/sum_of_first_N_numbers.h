// O(n) space-O(n)
int sumOfFirstNaturalNumberRecursion(int n)
{
    if (n == 0)
        return 0;
    else
        return sumOfFirstNaturalNumberRecursion(n - 1) + n;
}
// O(n) space-O(1)
int sumOfFirstNaturalNumberLoop(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    return sum;
}
// O(1) space-O(1)
int sumOfFirstNaturalNumberEquation(int n)
{
    return n * (n + 1) / 2;
}