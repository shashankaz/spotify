#include <bits/stdc++.h>
using namespace std;

class Node // We can use struct or class as they will behave same
{
public:
    int data;
    Node *next;

public:
    Node(int val, Node *nextNode = nullptr)
    {
        data = val;
        next = nextNode;
    }
};

int main()
{
    // Node *head = new Node(1); // Initialize the linked list with one node and set its value
    // head->next = new Node(2);
    // head->next->next = new Node(3);

    // Node *current = head;
    // while (current != nullptr)
    // {
    //     cout << current->data << " ";
    //     current = current->next;
    // }
    // cout << endl;

    // current = head;
    // while (current != nullptr)
    // {
    //     Node *next = current->next;
    //     delete current;
    //     current = next;
    // }

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *y = new Node(arr[0], nullptr); // Create a new node with the first element of the array(without use of * it will throw an error bcz it is and object and contain data and next pointer)
    cout << y << endl;                   // This prints the memory address of the node
    cout << y->data << endl;             // This prints the data value of the node
    cout << y->next << endl;             // This prints the next pointer (nullptr)

    Node *z = new Node(arr[1], y);
    cout << z.next << endl; // This thows an error because 'next' is not a member of Node, it should be 'z->next'

    Node a = Node(arr[2], z);
    cout << a << endl;      // This will print the memory address of the node
    cout << a.data << endl; // This prints the data value of the node
    cout << a.next << endl; // This prints the next pointer (z)

    return 0;
}