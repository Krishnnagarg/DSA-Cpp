#include <iostream>
using namespace std;
#include <deque>

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4); // 1 2 3 4 

    dq.push_front(5); // 5 1 2 3 4

    dq.pop_back(); // 5 1 2 3 
    cout << dq.front() << " " << dq.back() << " ";

    return 0;
}
