#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0)
        {
            if (arr[i] < mini || arr[i] > maxi)
                count++;
        }

        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    cout << count << endl;

    return 0;
}
