#include <bits/stdc++.h>
using namespace std;

class StackImplementation
{
    int st[10];
    int topIndex = -1;

public:
    int push(int x)
    {
        if (topIndex >= 9)
            return -1;
        st[++topIndex] = x;
        return 0;
    }

    int pop()
    {
        if (topIndex == -1)
            return -1;
        return st[topIndex--];
    }

    int top()
    {
        if (topIndex == -1)
            return -1;
        return st[topIndex];
    }

    int size()
    {
        return topIndex + 1;
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