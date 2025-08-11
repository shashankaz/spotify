int fact(int n)
{
    if (n <= 1)
        return 1;

    return n * fact(n - 1);
}

long long fact(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}