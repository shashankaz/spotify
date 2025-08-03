#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int val = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            val = min(val, abs(arr[i] - arr[i - 1]));
        }

        cout << val << endl;
    }

    return 0;
}
