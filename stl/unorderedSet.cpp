#include <bits/stdc++.h>
using namespace std;

void explainUnorderedSet()
{
    // unordered_set stores unique elements in any order

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // lower_bound and upper_bound function does not works in unordered_set
    // rest all function works in unordered_set same as set
    // It has a better complexity than set in most cases,
    // except some when collision happens
}

int main()
{
    explainUnorderedSet();

    return 0;
}