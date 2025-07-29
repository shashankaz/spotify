#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int val = 0;
    int coins[] = {5, 4, 3, 2, 1};

    for (int coin : coins)
    {
        val += n / coin;
        n %= coin;
    }

    cout << val;
    return 0;
}
