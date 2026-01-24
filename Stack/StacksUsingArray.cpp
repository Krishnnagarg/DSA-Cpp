#include <iostream>
using namespace std;
#define MAX 5

class Stack
{
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow";
            return;
        }
        top--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty";
            return;
        }
        cout << "Stack Top Value is :- " << arr[top];
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty";
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); //Stack Overflow Show 

    s.display(); 

    s.pop();
    s.display();

    s.peek();

    return 0;
}
