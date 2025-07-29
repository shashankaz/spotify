#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int small = 0, cap = 0;
    for (char c : s)
    {
        if (islower(c))
            small++;
        else if (isupper(c))
            cap++;
    }

    if (small >= cap)
    {
        for (char &c : s)
            c = tolower(c);
    }
    else
    {
        for (char &c : s)
            c = toupper(c);
    }

    cout << s;
    return 0;
}
