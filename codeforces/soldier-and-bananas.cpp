#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total += k * i;
    }

    cout << (total - n < 0 ? 0 : total - n);

    return 0;
}
