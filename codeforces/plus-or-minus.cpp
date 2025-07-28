#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << '+';
        else
            cout << '-';
        cout << endl;
    }

    return 0;
}
