#include <iostream>
using namespace std;

// int main() {
//     int x = 10;        // Normal integer variable
//     int *p;            // Pointer declaration

//     p = &x;            // Pointer me x ka address store

//     cout << x << endl;     // Value of x
//     cout << &x << endl;    // Address of x
//     cout << p << endl;     // Address stored in pointer
//     cout << *p << endl;    // Value at that address

//     return 0;
// }

int main() {
    int arr[] = {1,23,44};

    for ( int val : arr) {
        cout << val << " ";
    }

    cout << arr << " ";
    cout << *arr << " ";
    cout << *(arr+1) << " ";
    
    return 0;
}
