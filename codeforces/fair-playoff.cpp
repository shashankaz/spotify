#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<int> arr(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int w1 = (arr[0] > arr[1] ? arr[0] : arr[1]);
        int w2 = (arr[2] > arr[3] ? arr[2] : arr[3]);

        sort(arr.begin(), arr.end(), greater<int>());

        if (w1 == arr[0] || w1 == arr[1])
            if (w2 == arr[0] || w2 == arr[1])
            {

                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
