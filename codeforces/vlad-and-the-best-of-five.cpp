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

        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }

        if (mpp['A'] > mpp['B'])
            cout << 'A' << endl;
        else
            cout << 'B' << endl;
    }

    return 0;
}
