#include <bits/stdc++.h>
using namespace std;

class QueueImplementation
{
    stack<int> s1, s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty())
            return;

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int top()
    {
        if (s1.empty())
            return -1;

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int frontElement = s2.top();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return frontElement;
    }

    int size()
    {
        return s1.size();
    }
};

// The above approach is valid when we have a lot of push operations and few pop operations.
// Else we can swap the whole stack after each push operation such that the pop and top operations become O(1).
// Or we can maintain two stacks and push to 1 and after pop or top operation we can shift all elements to 2nd and perform the action there
// till it gets empty and till then store the new push to 1st stack.

int main()
{
    QueueImplementation q;
    q.push(5);
    q.push(10);
    cout << "Front element is: " << q.top() << endl;
    cout << "Queue size is: " << q.size() << endl;
    q.pop();
    cout << "Front element after pop is: " << q.top() << endl;
    cout << "Queue size after pop is: " << q.size() << endl;
    return 0;
}