#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (!checkPrime(i) && !checkPrime(n - i))
        {
            cout << i << " " << (n - i) << endl;
            break;
        }
    }

    return 0;
}
