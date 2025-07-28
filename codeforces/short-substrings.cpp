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

        string ans = s.substr(0, 2);

        for (int i = 3; i < s.size(); i += 2)
        {
            ans.push_back(s[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
