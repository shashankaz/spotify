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
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        for (int i = 0; i < n; ++i)
        {
            if (freq[arr[i]] == 1)
            {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}
