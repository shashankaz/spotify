#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (s == "abc")
        {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = i + 1; j < 3; ++j)
            {
                swap(s[i], s[j]);
                if (s == "abc")
                    found = true;
                swap(s[i], s[j]);
                if (found)
                    break;
            }
            if (found)
                break;
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
