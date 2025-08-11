// In Insertion Sort, we take an element and place it at the correct position in the sorted
// portion of the array. Like we take the first element as sorted, then we take the next element and
// place it in the sorted portion, and so on until the entire array is sorted.

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// TC : O(n^2) for the worst case (when the array is sorted in reverse order) | O(n) for the best case (when the array is already sorted)
// SC : O(1) (in-place sorting)