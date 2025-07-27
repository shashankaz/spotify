#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;

    // All operations run in O(1) time complexity

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;
}

int main()
{
    explainQueue();

    return 0;
}