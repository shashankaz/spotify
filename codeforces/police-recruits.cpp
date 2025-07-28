#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int res = 0;
    int cr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0 && arr[i] <= 10)
            res += arr[i];
        else
        {
            if (res > 0)
                res--;
            else
                cr++;
        }
    }

    cout << cr;

    return 0;
}
