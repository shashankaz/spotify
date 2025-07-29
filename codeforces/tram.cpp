#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0, mini = INT_MIN;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        count = count - a + b;
        mini = max(mini, count);
    }

    cout << mini;

    return 0;
}
