#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int p1 = k * l;
    int p2 = p1 / nl;
    int p3 = c * d;
    int p4 = p / np;

    cout << min(p2, min(p3, p4)) / n;

    return 0;
}
