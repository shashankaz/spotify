#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int val = 1;
    while ((val * x) % 10 != y && (val * x) % 10 != 0)
    {
        val++;
    }

    cout << val << endl;

    return 0;
}
