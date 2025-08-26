#include <bits/stdc++.h>
using namespace std;

class QueueImplementation
{
    static const int SIZE = 10;
    int q[SIZE];
    int currSize = 0;
    int front = -1;
    int rear = -1;

public:
    int push(int x)
    {
        if (currSize == SIZE)
            return -1;
        if (currSize == 0)
        {
            front++;
            rear++;
        }
        else
        {
            rear = (rear + 1) % SIZE;
            q[rear] = x;
            currSize++;
        }
    }

    int pop()
    {
        if (currSize == 0)
            return -1;
        if (currSize == 1)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
            currSize--;
        }
    }

    int top()
    {
        if (currSize == 0)
            return -1;
        return q[front];
    }

    int size()
    {
        return currSize;
    }
};

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