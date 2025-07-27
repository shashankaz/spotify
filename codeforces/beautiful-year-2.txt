#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = n + 1;

    while (true)
    {
        int temp = ans;
        set<int> sett;

        while (temp > 0)
        {
            sett.insert(temp % 10);
            temp /= 10;
        }

        if (sett.size() == 4)
            break;
        else
            ans++;
    }

    cout << ans;

    return 0;
}
