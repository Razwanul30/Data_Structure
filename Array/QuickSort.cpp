#include <iostream>
using namespace std;

void QuickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[right]; // Choose the rightmost element as pivot
        int i = left - 1; // Index of smaller element

        for (int j = left; j < right; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]); // Swap if element is smaller than or equal to pivot
            }
        }
        swap(arr[i + 1], arr[right]); // Place the pivot in the correct position
        int partitionIndex = i + 1;

        // Recursively sort elements before and after partition
        QuickSort(arr, left, partitionIndex - 1);
        QuickSort(arr, partitionIndex + 1, right);
    }
}

int main () {
    int arr[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    QuickSort(arr, 0, size - 1);
    cout << "After quick sort: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}