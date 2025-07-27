#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "I hate";

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            s.append(" that I love");
        else
            s.append(" that I hate");
    }

    cout << s << " it";

    return 0;
}
