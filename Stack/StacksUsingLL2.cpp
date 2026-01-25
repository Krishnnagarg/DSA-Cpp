#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node *head;
    Node *tail;

    public:
    Stack() {
        head = tail = NULL;
    }

    void push(int val) {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if(head == NULL) {
            cout << "Stack Underflow";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int peek() {
        if(head == NULL) {
            cout << "Stack is Empty";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }

};

int main() {

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // 60 50 40 30 20 10

    s.pop(); // 50 40 30 20 10

    while(!s.empty()) {
        cout << s.peek() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}