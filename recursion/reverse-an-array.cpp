#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int l, int r, vector<int> &arr)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);
    reverseAnArray(l + 1, r - 1, arr);
}

void reverseAnArray2(int i, vector<int> &arr)
{
    if (i >= arr.size() / 2)
        return;

    swap(arr[i], arr[arr.size() - i - 1]);
    reverseAnArray2(i + 1, arr);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Before" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    reverseAnArray2(0, arr);

    cout << "After" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
