#include <iostream>
using namespace std;

void MergeSort (int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the first half
        MergeSort(arr, left, mid);

        // Recursively sort the second half
        MergeSort(arr, mid + 1, right);

        // Merge the two halves
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Create temporary arrays
        int* L = new int[n1];
        int* R = new int[n2];

        // Copy data to temporary arrays
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        // Merge the temporary arrays back into arr[left..right]
        int i = 0; // Initial index of first sub-array
        int j = 0; // Initial index of second sub-array
        int k = left; // Initial index of merged sub-array

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of L[], if there are any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy the remaining elements of R[], if there are any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }

        // Free the temporary arrays
        delete[] L;
        delete[] R;
    }
}

int main () {
    int arr[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    MergeSort(arr, 0, size - 1);
    cout << "After merge sort: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}