double taylorSeriesRecursive1(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = taylorSeriesRecursive1(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double taylorSeriesRecursive2(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return taylorSeriesRecursive2(x, n - 1);
}
double taylorSeriesLoop(int x, int n)
{
    double s = 1;
    if (n == 0)
        return 1;
    while (n > 0)
    {
        s = 1 + x * s / n;
        n--;
    }
    return s;
}