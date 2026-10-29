#include <iostream>
#include <vector>

using namespace std;

struct stack {
    vector<int> data;
    stack () : data() {} // member initializer list

    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    int top() {
        if (!data.empty()) {
            return data.back();
        } else {
            cout << "Stack is empty. No top element." << endl;
            return -1; // or throw an exception
        }
    }

    bool isEmpty() {
        return data.empty();
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl; // Should print 20
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should print 10
    s.pop();
    s.pop(); // Should indicate that the stack is empty
    return 0;
}