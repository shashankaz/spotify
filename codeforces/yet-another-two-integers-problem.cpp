#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long a, b;
        cin >> a >> b;

        cout << (abs(a - b) + 9) / 10 << endl; // same as ceil(abs(a - b) / 10.0)
    }

    return 0;
}
