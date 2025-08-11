#include <bits/stdc++.h>
using namespace std;

int nthFibonacciNumber(int n)
{
    if (n <= 1)
        return n;

    return nthFibonacciNumber(n - 1) + nthFibonacciNumber(n - 2);
}

int nthFibonacciNumberM(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = nthFibonacciNumberM(n - 1, dp) + nthFibonacciNumberM(n - 2, dp);
}

int nthFibonacciNumberI(int n)
{
    if (n <= 1)
        return n;

    int prev2 = 0, prev1 = 1, curr;
    for (int i = 2; i <= n; ++i)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main()
{
    cout << nthFibonacciNumber(7) << endl;
    // TC - 2^n (exponential in nature)

    int n = 7;
    vector<int> dp(n + 1, -1);
    cout << nthFibonacciNumberM(n, dp) << endl;

    return 0;
}