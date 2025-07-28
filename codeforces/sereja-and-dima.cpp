#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = n - 1;
    int round = 1;
    int s1 = 0, s2 = 0;

    while (n--)
    {
        int maxi = max(arr[i], arr[j]);

        if (maxi == arr[i])
        {
            i++;
        }
        else
        {
            j--;
        }

        if (round % 2 != 0)
            s1 += maxi;
        else
            s2 += maxi;

        round++;
    }

    cout << s1 << " " << s2;

    return 0;
}
