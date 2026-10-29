class stack {
    int top;
    int maxSize;
    int[] stackArray;

    stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }

    boolean isFull() {
        return (top == maxSize - 1);
    }

    boolean isEmpty() {
        return (top == -1);
    }

    void push(int value) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push " + value);
            return;
        }
        stackArray[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1; // Return a sentinel value to indicate stack is empty
        }
        return stackArray[top--];
    }

    int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot peek.");
            return -1; // Return a sentinel value to indicate stack is empty
        }
        return stackArray[top];
    }

    public static void main(String[] args) {
        stack myStack = new stack(5);

        myStack.push(10);
        myStack.push(20);
        myStack.push(30);

        System.out.println("Top element is: " + myStack.peek());

        System.out.println("Popped element is: " + myStack.pop());
        System.out.println("Top element after pop is: " + myStack.peek());

        myStack.push(40);
        myStack.push(50);
        myStack.push(60); // This should show that the stack is full

        while (!myStack.isEmpty()) {
            System.out.println("Popped element is: " + myStack.pop());
        }

        // Try to pop from an empty stack
        myStack.pop();
    }
}