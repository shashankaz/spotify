#include <bits/stdc++.h>
using namespace std;

class StackImplementation
{
    struct Node
    {
        int data;
        Node *next;
    };
    Node *top = nullptr;

public:
    void push(int x)
    {
        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top == nullptr)
            return;
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int top()
    {
        if (top == nullptr)
            return -1;
        return top->data;
    }

    int size()
    {
        int count = 0;
        Node *current = top;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
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