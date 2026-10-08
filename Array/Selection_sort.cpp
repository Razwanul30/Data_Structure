#include <iostream>
using namespace std;

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before selection sort: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    selectionSort(arr, size);

    cout << "After selection sort: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;

}