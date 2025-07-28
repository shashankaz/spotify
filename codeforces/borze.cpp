#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans;

    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '.')
        {
            ans.push_back('0');
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans.push_back('1');
            i += 2;
        }
        else
        {
            ans.push_back('2');
            i += 2;
        }
    }

    cout << ans;

    return 0;
}
