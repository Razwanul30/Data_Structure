#include <iostream>
using namespace std;

void traverse(int arr[], int size) {
    
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtBeginning(int arr[], int& n, int value) {
    
    if (n >= 10) {
        cout << "Array is full. Cannot insert at the beginning." << endl;
        return;
    }

    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n++;
}

void insertAtMiddle(int arr[], int& n, int index, int value) {
    
    if (n >= 10) {
        cout << "Array is full. Cannot insert at the middle." << endl;
        return;
    }

    if (index < 0 || index > n) {
        cout << "Invalid index. Cannot insert at the middle." << endl;
        return;
    }

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
}

void insertAtEnd(int arr[], int& n, int value) {
    
    if (n >= 10) {
        cout << "Array is full. Cannot insert at the end." << endl;
        return;
    }

    arr[n] = value;
    n++;
}

void deleteFromBeginning(int arr[], int& n) {
    
    if (n <= 0) {
        cout << "Array is empty. Cannot delete from the beginning." << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteFromMiddle(int arr[], int& n, int index) {
    
    if (n <= 0) {
        cout << "Array is empty. Cannot delete from the middle." << endl;
        return;
    }

    if (index < 0 || index >= n) {
        cout << "Invalid index. Cannot delete from the middle." << endl;
        return;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteFromEnd(int arr[], int& n) {
    
    if (n <= 0) {
        cout << "Array is empty. Cannot delete from the end." << endl;
        return;
    }

    n--;
}



int main() {

    int arr[10] = {10, 20, 30, 40, 50};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 5; // Current number of elements in the array

    // 1. Traversal
    traverse(arr, size);

    // 2. Access / Retrieval
    cout << "Access the element at index 2: " << arr[2] << endl;

    // 3. Insertion at Beginning
    cout << "Inserting 5 at the beginning of the array." << endl;
    insertAtBeginning(arr, size, 5);
    cout << "After insertion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;

    // 4. Insertion at Middle
    cout << "Inserting 25 at the middle(4th index) of the array." << endl;
    insertAtMiddle(arr, size, 4, 25);
    cout << "After insertion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;

    // 5. Insertion at End
    cout << "Inserting 60 at the end of the array." << endl;
    insertAtEnd(arr, size, 60);
    cout << "After insertion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;

    // 6. Deletion from Beginning
    cout << "Deleting the first element from the array." << endl;
    deleteFromBeginning(arr, size);
    cout << "After deletion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;

    // 7. Deletion from Middle
    cout << "Deleting the element at index 2 from the array." << endl;
    deleteFromMiddle(arr, size, 2);
    cout << "After deletion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;

    // 8. Deletion from End
    cout << "Deleting the last element from the array." << endl;
    deleteFromEnd(arr, size);
    cout << "After deletion, ";
    traverse(arr, size);
    cout << "Current size of the array: " << size << endl;


    // 9. Update / Modification
    cout << "Updating the element at index 1 to 100." << endl;
    if (size > 1) {
        arr[1] = 100;
    }
    cout << "After update, ";
    traverse(arr, size);

    return 0;
}