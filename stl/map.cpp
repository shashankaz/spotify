#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    // Store data in key, value pair and key is always unique and in sorted order

    map<int, int> mpp;
    mpp[1] = 2;
    mpp.insert({3, 1});
    mpp.insert({2, 4});
    mpp.insert({4, 5});
    mpp.insert({5, 6});
    mpp.insert({6, 7});
    mpp.insert({7, 8});
    mpp.insert({8, 9});
    mpp.insert({9, 10});

    mpp.emplace(10, 11);

    map<int, pair<int, int>> mpp1;
    mpp1[1] = {2, 3};
    mpp1.insert({4, {5, 6}});

    map<pair<int, int>, int> mpp2;
    mpp2[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;
    cout << mpp[10] << endl;

    auto it = mpp.find(3);
    cout << it->first << " " << it->second << endl;
    cout << *(it).first << " " << *(it).second << endl;

    auto it1 = mpp.find(11);
    if (it1 == mpp.end())
    {
        cout << "No such key" << endl;
    }
    else
    {
        cout << it1->first << " " << it1->second << endl;
    }

    auto it = mpp.lower_bound(2);
    auto it1 = mpp.upper_bound(3);

    // erase, size, empty, swap are same as other containers
}

int main()
{
    explainMap();

    return 0;
}