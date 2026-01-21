
// Bubble Sort, Selection Sort, Insertion Sort, Merge Sort Practice Problems

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// Bubble Sort ------------>

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int a[100];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Bubble Sort
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(a[j] > a[j+1]) {
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }

//     cout << "Sorted Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// Selection Sort ------------------->

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int a[100];
//     cout << "Enter elements in array/n: ";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i]; // Taking array input from user
//     }

//     // Selection Sort logic
//     for(int i = 0; i < n-1; i++) {
//         int minIndex = i; // Assume current index is minimum

//         // Find minimum element in unsorted part
//         for(int j = i+1; j < n; j++) {
//             if(a[j] < a[minIndex]) {
//                 minIndex = j; // Update minimum index
//             }
//         }

//         // Swap minimum element with first element of unsorted part
//         if(minIndex != i) {
//             // int temp = a[i];
//             // a[i] = a[minIndex];
//             // a[minIndex] = temp;
//             swap(a[i], a[minIndex]);
//         }
//     }

//     cout << "Sorted Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// 3. Insertion Sort ------------------>

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "----------------Insertion Sort----------------" << endl;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int a[100];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];   // Taking array input from user
//     }

//     // Insertion Sort Logic
//     for(int i = 1; i < n; i++) {
//         int key = a[i];      // Current element to be inserted
//         int j = i - 1;

//         // Shift elements that are greater than key
//         while(j >= 0 && a[j] > key) {
//             a[j + 1] = a[j]; // Shift element to right
//             j--;
//         }

//         a[j + 1] = key;      // Insert key at correct position
//     }

//     cout << "Sorted Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// 3. Insertion Sort Practice------------------>

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "-------Insertion Sort Practice-------" << endl;
//     int n;
//     cout << "Enter n \n";
//     cin >> n;

//     int a[100];
//     cout << "Enter array elements: \n ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "unSorted array is \n :-" ;
//     for(int i=0 ; i < n; i++ ) {
//         cout << a[i] << " " ;
//     }

//     // insertion sort
//     for (int i = 1; i < n; i++)
//     {
//         int key = a[i];
//         int j = i - 1;

//         while (j >= 0 && a[j] > key)
//         {
//             a[j + 1] = a[j];
//             j--;
//         }

//         a[j+1] = key;
//     }

//     cout << "Sorted array is :-" ;
//     for(int i=0 ; i < n; i++ ) {
//         cout << a[i] << " " ;
//     }

//     return 0 ;
// }

// 4. Merge Sort -------------------->

// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge function
// void merge(vector<int> &arr, int str, int mid, int end) {

//     vector<int> temp;
//     int i = str;        // left part start
//     int j = mid + 1;    // right part start

//     // Compare and merge
//     while (i <= mid && j <= end) {
//         if (arr[i] <= arr[j]) {
//             temp.push_back(arr[i]);
//             i++;
//         } else {
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }

//     // Remaining elements from left part
//     while (i <= mid) {
//         temp.push_back(arr[i]);
//         i++;
//     }

//     // Remaining elements from right part
//     while (j <= end) {
//         temp.push_back(arr[j]);
//         j++;
//     }

//     // Copy temp back to original array
//     for (int idx = 0; idx < temp.size(); idx++) {
//         arr[str + idx] = temp[idx];
//     }
// }

// // Merge Sort function
// void mergeSort(vector<int> &arr, int str, int end) {
//     if (str < end) {

//         // Correct mid formula
//         int mid = str + (end - str) / 2;

//         mergeSort(arr, str, mid);      // left half
//         mergeSort(arr, mid + 1, end);  // right half

//         merge(arr, str, mid, end);     // merge both halves
//     }
// }

// int main() {
//     vector<int> arr = {12, 31, 35, 8, 32, 17};

//     mergeSort(arr, 0, arr.size() - 1);

//     for (int val : arr) {
//         cout << val << " ";
//     }

//     return 0;
// }


// 4. Merge Sort Practice -------------------->

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int str, int mid, int end)
{

    vector<int> temp;
    int i = str;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[str + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int str, int end)
{
    if (str < end)
    {

        int mid = str + (end - str) / 2;

        mergeSort(arr, str, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, str, mid, end);
    }
}

int main()
{

    vector<int> arr = {4, 1, 3, 2};

    mergeSort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}

