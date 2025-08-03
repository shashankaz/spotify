#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int mini = INT_MAX;
        int val1 = abs(x - x) + abs(x - y) + abs(x - z);
        mini = min(mini, val1);
        int val2 = abs(y - x) + abs(y - y) + abs(y - z);
        mini = min(mini, val2);
        int val3 = abs(z - x) + abs(z - y) + abs(z - z);
        mini = min(mini, val3);

        cout << mini << endl;
    }

    return 0;
}
