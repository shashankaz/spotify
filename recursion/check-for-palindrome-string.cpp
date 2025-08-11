#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int i, string s)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return isPalindrom(i + 1, s);
}

int main()
{
    string st = "madam";
    cout << isPalindrom(0, st) << endl;

    return 0;
}

// TC - O(n/2)