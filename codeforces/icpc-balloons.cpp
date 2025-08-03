#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        set<char> sett;
        int sc = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (sett.find(s[i]) != sett.end())
                sc++;
            else
                sc += 2;

            sett.insert(s[i]);
        }

        cout << sc << endl;
    }

    return 0;
}
