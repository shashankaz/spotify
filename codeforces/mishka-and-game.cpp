#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            ans++;
        else if (a < b)
            ans--;
    }

    if (ans > 0)
        cout << "Mishka";
    else if (ans < 0)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}
