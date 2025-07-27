#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int ans = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (int(s1[i]) > int(s2[i]))
        {
            ans = 1;
            break;
        }
        else if (int(s1[i]) < int(s2[i]))
        {
            ans = -1;
            break;
        }
    }

    cout << ans;

    return 0;
}
