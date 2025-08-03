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

        int mini = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[mini] > arr[i])
                mini = i;
        }

        arr[mini]++;

        long long prod = 1;
        for (int i = 0; i < n; i++)
        {
            prod *= arr[i];
        }

        cout << prod << endl;
    }

    return 0;
}
