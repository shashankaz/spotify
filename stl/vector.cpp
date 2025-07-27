#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> v;

    v.push_back(4);
    v.emplace_back(3);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}

    vector<int> v2(5); // {0, 0, 0, 0, 0}

    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}

    vector<int> v4(v3); // {20, 20, 20, 20, 20}

    vector<int>::iterator it = v.begin(); // {10, 20, 12, 23}

    it++;
    cout << *(it) << " "; // 20

    it = it + 2;
    cout << *(it) << " "; // 23

    vector<int>::iterator it = v.end(); // points after the last element

    vector<int>::iterator it = v.rend(); // points before the first element

    vector<int>::iterator it = v.rbegin(); // points at the last element

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " "; // last element

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    v.erase(v.begin() + 1);

    // {10, 20, 12, 23}
    v.erase(v.begin() + 2, v.begin() + 4);

    // {10, 20, 12, 23, 35}
    v.insert(v.begin(), 300); // {300, 10, 20, 12, 23, 35}

    v.insert(v.begin() + 2, 3, 10); // {300, 10, 10, 10, 20, 12, 23, 35}

    // {10, 20}
    vector<int> copy(2, 50);                       // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 10, 20}

    cout << v.size();     // 4
    cout << v.capacity(); // 4
    cout << v.max_size(); // 4
    v.resize(10);
    cout << v.capacity(); // 10

    v.pop_back(); // 0(1)

    v1.swap(v2);

    v.clear(); // erases the entire vector

    cout << v.empty();
}

int main()
{
    explainVector();

    return 0;
}