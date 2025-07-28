#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string str = "codeforces";
    for (int i = 0; i < n; i++)
    {
        size_t pos = str.find(arr[i]);
        if (pos != string::npos)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
