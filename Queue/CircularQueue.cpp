#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int currSize, cap;
    int f, r;

public:
    CircularQueue(int size)
    {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0, r = -1;
    }

    void push(int val) // O(1)
    {
        if (currSize == cap)
        {
            cout << "CQ is Full";
        }
        r = (r + 1) % cap;
        arr[r] = val;
        currSize++;
    }

    void pop() // O(1)
    {
        if (empty())
        {
            cout << "CQ is Empty";
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    int front() // O(1)
    { 
        if (empty())
        {
            cout << "CQ is Empty";
            return -1;
        }
        return arr[f];
    }

    void printArr() {
        for(int i=0;i<cap;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool empty() // O(1)
    {
        return currSize == 0;
    }
};

int main()
{
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3); // 1 2 3 

    cq.pop(); // 2 3 
    cq.push(4); // 4 2 3 

    // cq.printArr(); // 4 2 3 

    while(!cq.empty()) {
        cout << cq.front() << " "; // 2 3 4 
        cq.pop();
    }

    cout << endl;

    return 0;
}