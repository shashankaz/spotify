#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            flag = true;
    }

    if (flag)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}
