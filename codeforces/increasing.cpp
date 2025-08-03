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

        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int te = 0;
            cin >> te;
            mpp[te]++;
        }

        if (mpp.size() == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
