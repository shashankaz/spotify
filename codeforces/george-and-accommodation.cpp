#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a + 2 <= b)
            count++;
    }

    cout << count;

    return 0;
}
