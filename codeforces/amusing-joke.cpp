#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> mpp1, mpp2;

    for (char ch : s1)
        mpp1[ch]++;
    for (char ch : s2)
        mpp1[ch]++;
    for (char ch : s3)
        mpp2[ch]++;

    bool flag = true;
    for (auto it : mpp2)
    {
        if (mpp1[it.first] != it.second)
        {
            flag = false;
            break;
        }
    }

    if (flag && mpp1.size() == mpp2.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
