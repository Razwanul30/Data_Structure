#include <iostream>

using namespace std;

struct stackArray {
    int size;
    int top;
    int* arr;
    stackArray(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    ~stackArray() {
        delete[] arr;
    }

    bool isFull() {
        if (top == size - 1) {
            return true;    
        }
        return false;
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        return false;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; // Return a sentinel value indicating the stack is empty
        }
        return arr[top];
    }
};


int main () {
    stackArray s(5);
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    cout << "Is stack full after pushes 5 elements? " << (s.isFull() ? "Yes" : "No") << endl;
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}