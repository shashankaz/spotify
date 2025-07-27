#include <bits/stdc++.h>
using namespace std;

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    // In vector we use insert which is constly
    // List uses doubly linked list so it is fast whereas vector uses single linked list
    ls.push_front(5);    // {5, 2, 4}
    ls.emplace_front(5); // {5, 5, 2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
    explainList();

    return 0;
}