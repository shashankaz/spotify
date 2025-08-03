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

        string ans;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'p')
                ans.push_back('q');
            else if (s[i] == 'q')
                ans.push_back('p');
            else
                ans.push_back('w');
        }

        cout << ans << endl;
    }

    return 0;
}
