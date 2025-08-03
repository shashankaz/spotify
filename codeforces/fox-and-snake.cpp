#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    bool side = false;
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            cout << string(y, '#');
        }
        else
        {
            if (side)
                cout << "#" << string(y - 1, '.');
            else
                cout << string(y - 1, '.') << "#";

            side = !side;
        }
        cout << endl;
    }

    return 0;
}
