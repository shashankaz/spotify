#include <bits/stdc++.h>
using namespace std;

// Pair lies in the utility header file/library

void explainPair()
{
    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second << "\n";

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << "\n";

    // cout << p2.second << "\n"; // This will throw an error

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << "\n";
}

int main()
{
    explainPair();

    return 0;
}