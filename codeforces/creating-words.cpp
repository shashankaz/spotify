#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        cout << s2[0] << s1.substr(1, s1.size()) << " " << s1[0] << s2.substr(1, s2.size()) << endl;
    }

    return 0;
}
