#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[(s[i] - '0')]++;
    }

    int count = 0;
    for (auto it : mpp)
    {
        it.second == 1;
        count++;
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
