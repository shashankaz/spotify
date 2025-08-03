#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool vovaTurn = false;
        bool winnerDeclared = false;

        for (int round = 1; round <= 10; ++round)
        {
            if (!vovaTurn)
            {
                if (n % 3 == 0)
                {
                    cout << "Second" << endl;
                    winnerDeclared = true;
                    break;
                }
                else
                {
                    if (n % 3 == 1)
                        n = max(0, n - 1);
                    else if (n % 3 == 2)
                        n++;
                }
            }
            else
            {
                if (n % 3 == 0)
                    n++;
                else
                    n--;
            }
            vovaTurn = !vovaTurn;
        }

        if (!winnerDeclared)
        {
            cout << "First" << endl;
        }
    }

    return 0;
}
