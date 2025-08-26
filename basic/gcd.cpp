int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}