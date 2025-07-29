#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        string s1, s2;
        cin >> s1 >> s2;

        bool flag = false;
        for (int i = 0; i < x; i++)
        {
            if (s1[i] != s2[i] && !((s1[i] == 'B' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'B')))
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << "YES" << endl;
    }

    return 0;
}
