#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<vector<char>> arr(10, vector<char>(10));
        int ans = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    int layer = min({i, j, 9 - i, 9 - j});
                    ans += layer + 1;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
