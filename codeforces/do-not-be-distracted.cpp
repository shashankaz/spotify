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

        unordered_map<char, int> mpp;
        string s;
        cin >> s;

        mpp[s[0]] = 1;

        bool flag = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] != s[i] && mpp[s[i]] > 0)
            {
                cout << "NO";
                flag = false;
                break;
            }
            else if (s[i - 1] != s[i])
            {
                mpp[s[i]] = 1;
            }
        }

        if (flag)
            cout << "YES";

        cout << endl;
    }

    return 0;
}
