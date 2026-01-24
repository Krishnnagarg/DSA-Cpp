// Using Array/Vector

#include <iostream>
#include <vector> // in array uses vector for dynamic array / size
using namespace std;

class Stack
{
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        if( v.empty()) {
            cout << "Stack UnderFlow" << endl;
            return;
        }
        v.pop_back();
    }

    int top() // top/peek() 
    {
        if( v.empty()) {
            cout << "Stack is Empty" ;
            return -1;
        }
        return v.back();
    }

    bool empty()
    {
        return v.size() == 0;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while( !s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}