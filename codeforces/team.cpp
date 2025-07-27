#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int val = 0;
        int a, b, c;
        cin >> a >> b >> c;
        if (a > 0)
            val++;
        if (b > 0)
            val++;
        if (c > 0)
            val++;

        if (val >= 2)
            count++;
    }

    cout << count;

    return 0;
}
