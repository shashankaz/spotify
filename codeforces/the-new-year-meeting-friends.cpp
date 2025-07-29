#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mini = INT_MAX;
    mini = min(mini, abs(a - b) + abs(b - c));
    mini = min(mini, abs(b - c) + abs(c - a));
    mini = min(mini, abs(c - a) + abs(a - b));

    cout << mini;

    return 0;
}
