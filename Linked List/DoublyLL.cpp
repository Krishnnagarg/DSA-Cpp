#include <iostream>
using namespace std;

// Doubly Linked List Node
struct Node
{
    int data;   // Store data
    Node *prev; // Previous node address
    Node *next; // Next node address
};

void forwardDisplay(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    Node *head = NULL; // List is empty initially

    // Create first node
    Node *first = new Node();
    first->data = 10;
    first->prev = NULL; // First node has no previous
    first->next = NULL;

    head = first; // Head points to first node

    // Create second node
    Node *second = new Node();
    second->data = 20;
    second->prev = first; // Link back to first
    second->next = NULL;

    first->next = second; // Link first to second

    // Create third node
    Node *third = new Node();
    third->data = 30;
    third->prev = second; // Link back to second
    third->next = NULL;

    second->next = third; // Link second to third

    cout << "Doubly Linked List : ";
    forwardDisplay(head);
    return 0;
}
