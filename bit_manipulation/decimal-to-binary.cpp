#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n)
{
    string s;
    while (n > 0)
    {
        s.push_back((n % 2) + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());

    return s;
}

string decimal_to_binary2(int n)
{
    if (n == 0)
        return "0";

    string s;
    while (n > 0)
    {
        s.insert(s.begin(), (n % 2) + '0');
        n /= 2;
    }

    return s;
}

int main()
{
    int n = 13;
    cout << decimal_to_binary(n);

    return 0;
}

// TC - log2(n)
// SC - log2(n)