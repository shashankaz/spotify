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
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mini = min(arr[i], mini);
        }

        int val = 0;
        for (int i = 0; i < n; i++)
        {
            val += arr[i] - mini;
        }

        cout << val << endl;
    }

    return 0;
}
