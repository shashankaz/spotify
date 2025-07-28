#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string x;
        cin >> x;

        int s1 = 0, s2 = 0;
        for (int i = 0; i < 6; ++i)
        {
            if (i < 3)
                s1 += x[i] - '0';
            else
                s2 += x[i] - '0';
        }

        if (s1 == s2)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
