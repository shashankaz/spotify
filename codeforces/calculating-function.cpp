#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum;
    if (n % 2 == 0)
        sum = n / 2;
    else
        sum = -(n + 1) / 2;

    cout << sum;
    return 0;
}

// f(2) = -1 + 2 = 1
// f(5) = - 1 + 2 - 3 + 4 - 5 = -3