#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string s3;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] - '0' == 0 && s2[i] - '0' == 0)
            s3.push_back('0');
        else if (s1[i] - '1' == 0 && s2[i] - '1' == 0)
            s3.push_back('0');
        else if (s1[i] - '1' == 0 && s2[i] - '0' == 0)
            s3.push_back('1');
        else if (s1[i] - '0' == 0 && s2[i] - '1' == 0)
            s3.push_back('1');
    }

    cout << s3;

    return 0;
}
