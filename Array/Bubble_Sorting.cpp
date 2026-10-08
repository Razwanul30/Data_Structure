#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main () {
    int arr[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    bubbleSort(arr, size);
    cout<<"after bubble sort: ";
    printArray(arr, size);

    return 0;
}