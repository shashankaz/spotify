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
        unordered_map<int, int> mpp;

        while (temp > 0)
        {
            mpp[temp % 10]++;
            temp /= 10;
        }

        if (mpp.size() == 4)
            break;
        else
            ans++;
    }

    cout << ans;

    return 0;
}
