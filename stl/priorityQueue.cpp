#include <bits/stdc++.h>
using namespace std;

void explainPQ()
{
    // Max heap
    priority_queue<int> pq;

    // Data is stored in tree form

    pq.push(5);     // {5} - log(n)
    pq.push(2);     // {5, 2} - log(n)
    pq.push(8);     // {8, 5, 2} - log(n)
    pq.emplace(10); // {10, 8, 5, 2} - log(n)

    cout << pq.top(); // prints 10 - O(1)

    pq.pop(); // {8, 5, 2} - log(n)

    cout << pq.top(); // prints 8 - O(1)

    // size swap empty function same as others

    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

int main()
{
    explainPQ();

    return 0;
}