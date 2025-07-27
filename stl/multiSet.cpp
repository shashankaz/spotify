#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
    // Everything is same as set but it stores duplicate elements also in sorted order

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    auto it = ms.find(2);
    ms.erase(it);
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    ms.erase(ms.find(2));
    ms.erase(ms.find(2), ms.find(2) + 1);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    int cnt = ms.count(1);
    cout << cnt << endl;
}

int main()
{
    explainMultiSet();

    return 0;
}