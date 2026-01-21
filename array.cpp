
#include <iostream>
using namespace std;

int main() {
    // int arr[5] = {10, 20, 30, 40, 50};

    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

    int a=10,b=20,c=30;
    int *arr[3]; // array of integer pointers
    arr[0] = &a;
    arr[1] = &b;    
    arr[2] = &c;
    for(int i = 0; i < 3; i++) {
        cout << *arr[i] << " ";
    }

    return 0;

}