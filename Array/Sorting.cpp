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
    int arr1[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printArray(arr1, size1);

    bubbleSort(arr1, size1);
    cout<<"after bubble sort: ";
    printArray(arr1, size1);

    int arr2[] = {2, 6, 1, 8, 4, 3, 5, 7, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printArray(arr2, size2);

    return 0;
}