#include <bits/stdc++.h>
using namespace std;

class QueueImplementation
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *front = nullptr;
    Node *rear = nullptr;
    int currSize = 0;

public:
    void push(int x)
    {
        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = nullptr;
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        currSize++;
    }

    void pop()
    {
        if (front == nullptr)
            return;
        Node *temp = front;
        front = front->next;
        delete temp;
        currSize--;
        if (front == nullptr)
            rear = nullptr;
    }

    int top()
    {
        if (front == nullptr)
            return -1;
        return front->data;
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