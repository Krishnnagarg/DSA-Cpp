// 2. Radix Sort ---------------------->

#include <iostream>
#include <vector>
using namespace std;

void radixSort(vector<int> &arr)
{
    
}

int main()
{
    cout << "Radix Sort -->";
    vector<int> arr = {2, 3, 45, 16, 19, 18, 1};

    cout << "unsorted array";
    for (int val : arr)
    {
        cout << val << " ";
    }

    radixSort(arr);

    cout << "Sorted Array";
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}