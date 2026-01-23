#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void display(Node* head) {

    if (head == NULL)
        return;

    Node* temp = head;

    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

int main() {

    Node* head = NULL;

    Node* first = new Node();
    first->data = 10;
    first->next = NULL;

    head = first;

    Node* second = new Node();
    second->data = 20;
    second->next = NULL;

    first->next = second;

    Node* third = new Node();
    third->data = 30;
    third->next = NULL;

    second->next = third;

    // Make list circular
    third->next = head;   // last node points to first node

    cout << "Circular Linked List: ";
    display(head);

    return 0;
}
