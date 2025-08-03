#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += maxi - arr[i];
    }

    cout << sum << endl;

    return 0;
}
