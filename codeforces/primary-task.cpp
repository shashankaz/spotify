#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        string p = s.substr(2);
        string q = s.substr(0, 2);

        if (q != "10")
            cout << "NO";
        else if (p.empty() || p[0] == '0')
            cout << "NO";
        else if (p[0] == '1' && p.size() == 1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}
