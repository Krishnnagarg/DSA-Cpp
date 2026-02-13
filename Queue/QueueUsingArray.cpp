#include <iostream>
using namespace std;
#define MAX 5

class Queue
{

    int arr[MAX];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int val)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow";
            return;
        }
        front++;
    }

    int top()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        return (front == -1 || front > rear);
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.dequeue();
    }

    cout << endl;
    return 0;
}