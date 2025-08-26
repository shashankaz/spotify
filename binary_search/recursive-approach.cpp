#include <bits/stdc++.h>
using namespace std;

bool bsUtil(vector<int> &arr, int target, int left, int right)
{
    if (left > right)
        return false;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return true;
    else if (arr[mid] < target)
        return bsUtil(arr, target, mid + 1, right);
    else
        return bsUtil(arr, target, left, mid - 1);
}

bool bs(vector<int> &arr, int target)
{
    return bsUtil(arr, target, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;

    if (bs(arr, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}