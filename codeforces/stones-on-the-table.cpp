#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0 && arr[i] == arr[i - 1])
            ans++;
    }

    cout << ans;

    return 0;
}
