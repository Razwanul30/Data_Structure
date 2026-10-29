#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int val) : data(val), next(nullptr) {} //member initializer list
};

struct Stack {
    Node* top;
    Stack () : top(nullptr) {} //member initializer list

    void push (int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop () {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek () {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1; // or throw an exception
        }
        return top->data;
    }

    bool isEmpty () {
        return top == nullptr;
    }

    bool isFull () {
        cout << "Stack is never full unless memory is exhausted!" << endl;
        return false; // A linked list implementation of stack is never full unless memory is exhausted
    }
};

int main () {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element is: " << s.peek() << endl; // Output: Top element is: 20
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl; // Output: Top element after pop is: 10
    s.pop();
    s.pop(); // Output: Stack is empty!

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Output: Is stack empty? Yes
    return 0;
}