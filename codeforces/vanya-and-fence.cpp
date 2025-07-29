#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<float> arr(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count += ceil(arr[i] / k);
    }

    cout << count;

    return 0;
}
