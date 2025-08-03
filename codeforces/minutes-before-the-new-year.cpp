#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int hr = 24 - x;
        cout << hr * 60 - y << endl;
    }

    return 0;
}
