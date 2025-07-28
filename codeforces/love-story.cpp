#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str = "codeforces";
    while (n--)
    {
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != str[i])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
