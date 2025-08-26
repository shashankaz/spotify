#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

public:
    Node(T val, Node<T> *nextNode = nullptr)
    {
        data = val;
        next = nextNode;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node<int> *head = nullptr;
    Node<int> *tail = nullptr;

    for (int i = 0; i < arr.size(); i++)
    {
        Node<int> *newNode = new Node<int>(arr[i]);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node<int> *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    current = head;
    while (current != nullptr)
    {
        Node<int> *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}