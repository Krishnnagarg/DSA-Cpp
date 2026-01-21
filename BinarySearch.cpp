
// 1.Binary Search ------------>

// #include <iostream>
// using namespace std;

// int main() {
//     int n, key;

//     cout << "Enter size of sorted array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter sorted array elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter key to search: ";
//     cin >> key;

//     int left = 0, right = n - 1;

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == key)
//         {
//             cout << "Element found at index " << mid;
//             return 0;
//         }
//         else if (arr[mid] < key)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }

//     cout << "Element not found";

//     return 0;
// }

// 2.Fibonacci Search Implementation

#include <iostream>
using namespace std;

int fibonacciSearch(int arr[], int n, int key)
{

    int fib2 = 0;          // (m-2)'th Fibonacci   // fib means current Fibonacci number
    int fib1 = 1;          // (m-1)'th Fibonacci   // fib1 means previous Fibonacci number
    int fib = fib1 + fib2; // m'th Fibonacci    // fib2 means previous to previous Fibonacci number

    // Find the smallest Fibonacci number >= n
    while (fib < n)
    {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    int offset = -1;

    while (fib > 1)
    {

        int i = min(offset + fib2, n - 1); // fib2 means fibonacci privious to previous number

        if (arr[i] < key)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > key)
        { // left side move in which offset not change
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else
        {
            return i;
        }
    }

    // Check last element
    if (fib1 && arr[offset + 1] == key)
        return offset + 1;

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter size of sorted array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int index = fibonacciSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}
