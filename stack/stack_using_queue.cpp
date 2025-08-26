#include <bits/stdc++.h>
using namespace std;

class StackImplementation
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        q1.push(x);
    }

    void pop()
    {
        if (q1.empty())
            return;

        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1, q2);
    }

    int top()
    {
        if (q1.empty())
            return -1;

        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int topElement = q1.front();
        q2.push(topElement);
        q1.pop();
        swap(q1, q2);
        return topElement;
    }

    int size()
    {
        return q1.size();
    }
};

int main()
{
    StackImplementation s;
    s.push(5);
    s.push(10);
    cout << "Top element is: " << s.top() << endl;
    cout << "Stack size is: " << s.size() << endl;
    s.pop();
    cout << "Top element after pop is: " << s.top() << endl;
    cout << "Stack size after pop is: " << s.size() << endl;
    return 0;
}