#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Function to reverse linked list
    Node *reverseList()
    {

        Node *prev = NULL; // Step 1: previous pointer = NULL
        Node *curr = head; // Step 2: current pointer = head
        Node *next = NULL; // Step 3: next pointer

        while (curr != NULL)
        {

            next = curr->next; // Save next node
            curr->next = prev; // Reverse the link
            prev = curr;       // Move prev one step forward
            curr = next;       // Move curr one step forward
        }

        head = prev; // Update head to last node
        return head;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();
    ll.reverseList();
    ll.print();

    return 0;
}
