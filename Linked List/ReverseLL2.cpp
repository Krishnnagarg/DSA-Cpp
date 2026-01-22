#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;   // Data part
    Node *next; // Pointer to next node
};

// Function to reverse the linked list
Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL)
    {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    // Create nodes
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;

    Node *second = new Node();
    second->data = 20;
    second->next = NULL;

    Node *third = new Node();
    third->data = 30;
    third->next = NULL;

    Node *fourth = new Node();
    fourth->data = 40;
    fourth->next = NULL;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Original Linked List: ";
    display(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed Linked List: ";
    display(head);

    return 0;
}