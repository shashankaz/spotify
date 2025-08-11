#include <bits/stdc++.h>
using namespace std;

int findSum(int n)
{
    if (n == 1)
        return n;

    return n + findSum(n - 1);
}

void findSumParameterised(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }

    findSumParameterised(n - 1, sum + n);
}

int main()
{
    cout << findSum(5) << endl;
    findSumParameterised(5, 0);

    return 0;
}