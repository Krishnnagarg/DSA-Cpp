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

