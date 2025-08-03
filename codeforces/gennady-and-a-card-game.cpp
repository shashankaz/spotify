#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    vector<string> arr(5);
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (arr[i][0] == n[0] || arr[i][1] == n[1])
        {
            cout << "YES";
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "NO";

    return 0;
}
