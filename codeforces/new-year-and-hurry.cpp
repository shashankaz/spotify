#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int tMins = 4 * 60;
    int lMin = tMins - k;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        lMin -= 5 * i;
        if (lMin >= 0)
            count++;
        else
            break;
    }

    cout << count << endl;

    return 0;
}
