#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        if (x <= 1399)
            cout << "Division 4";
        else if (x <= 1599)
            cout << "Division 3";
        else if (x <= 1899)
            cout << "Division 2";
        else
            cout << "Division 1";
        cout << endl;
    }

    return 0;
}
