#include <bits/stdc++.h>
using namespace std;

int binary_to_binary(string s)
{
    int n = 0;
    int j = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        n += (s[i] - '0') * pow(2, j);
        j++;
    }

    return n;
}

int binary_to_binary2(string s)
{
    int n = 0, p2 = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            n += p2;
        }

        p2 *= 2;
    }

    return n;
}

int binary_to_decimal3(string s)
{
    int n = 0;
    for (char c : s)
    {
        n = n * 2 + (c - '0');
    }

    return n;
}

int main()
{
    string s = "1101";
    cout << binary_to_binary2(s);

    return 0;
}

// TC - O(len)
// SC - O(1)