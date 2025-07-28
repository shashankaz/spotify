#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int mini = min(a, min(b, c));
        int maxi = max(a, max(b, c));

        if (a != mini && a != maxi)
            cout << a;
        else if (b != mini && b != maxi)
            cout << b;
        else
            cout << c;

        cout << endl;
    }

    return 0;
}
