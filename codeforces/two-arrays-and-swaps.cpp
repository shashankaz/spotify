#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < min(k, n); i++)
        {
            if (b[i] > a[i])
            {
                swap(a[i], b[i]);
            }
            else
            {
                break;
            }
        }

        int sum = accumulate(a.begin(), a.end(), 0);
        cout << sum << endl;
    }

    return 0;
}
