
#include <iostream>
using namespace std;

int main()
{
    // Linear Search ------------>

    // int arr[] = {10, 25, 30, 45, 50};
    // int key = 30;
    // int n = 5;

    // for(int i = 0; i < n; i++) {
    //     if(arr[i] == key) {
    //         cout << "Element found at index " << i;
    //         return 0;
    //     }
    // }
    // cout << "Element not found";
    // return 0;

    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
    
}
