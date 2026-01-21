// Quick sort -------------------->

#include <iostream>
#include <vector>
using namespace std;

int partion(vector<int> &arr, int str, int end)
{
    int idx = str - 1;
    int pivot = arr[end];

    for (int j = str; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int str, int end)
{
    if (str < end)
    {
        int pivot = partion(arr, str, end);

        quickSort(arr, str, pivot - 1); // left side call
        quickSort(arr, pivot + 1, end); // right side call
    }
}

int main()
{
    cout << "-------Quick Sort Practice-------" << endl;

    vector<int> arr = {2,5,6,4,1,3};

    cout << "Unsorted array is :- ";
    for (int val : arr)
    {
        cout << val << " ";
    }

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array is :- ";
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}


