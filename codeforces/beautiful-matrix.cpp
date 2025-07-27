#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
    int m = 0, n = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
    }

    int sum = abs(2 - m) + abs(2 - n);
    cout << sum;

    return 0;
}
