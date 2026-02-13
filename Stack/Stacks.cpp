#include<iostream>
#include<stack> //----------->
using namespace std;

int main () {
    stack<int> s; // means integer type ka stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()) {
        cout << s.top() << " "; // 40 30 20 10
        s.pop();
    }

    cout << endl;
    return 0;
}