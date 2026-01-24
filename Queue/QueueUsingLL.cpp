
#include <iostream>
using namespace std;
#include <vector>

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

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void push(int val) // O(1)
    {
        Node *newNode = new Node(val);
        if (empty())
        {
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() // O(1)
    {
        if (empty())
        {
            cout << "Queue UnderFlow";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int front()
    {
        if (empty())
        {
            cout << "Queue is Empty";
            return -1;
        }
        return head->data;
    }

    bool empty() // O(1)
    {
        return head == NULL;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}
