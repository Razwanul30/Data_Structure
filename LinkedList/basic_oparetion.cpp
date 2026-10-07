#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Display
void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Insert at Beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

// Insert at End
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at Position
// Position is 0-based
void insertAtPosition(Node*& head, int value, int position) {

    if (position == 0) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete from Beginning
void deleteFromBeginning(Node*& head) {

    if (head == nullptr) {
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

// Delete from End
void deleteFromEnd(Node*& head) {

    if (head == nullptr) {
        return;
    }

    // Only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// Delete by Value
void deleteValue(Node*& head, int value) {

    if (head == nullptr) {
        return;
    }

    // If first node contains value
    if (head->data == value) {
        Node* temp = head;
        head = head->next;

        delete temp;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != value) {
        temp = temp->next;
    }

    // Value not found
    if (temp->next == nullptr) {
        cout << "Value not found" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;

    temp->next = nodeToDelete->next;

    delete nodeToDelete;
}


int main() {

    Node* head = nullptr;

    // Insert at End
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Initial List: ";
    display(head);


    // Insert at Beginning
    insertAtBeginning(head, 5);

    cout << "After Insert at Beginning: ";
    display(head);


    // Insert at End
    insertAtEnd(head, 40);

    cout << "After Insert at End: ";
    display(head);


    // Insert at Position
    insertAtPosition(head, 15, 2);

    cout << "After Insert 15 at Position 2: ";
    display(head);


    // Delete from Beginning
    deleteFromBeginning(head);

    cout << "After Delete from Beginning: ";
    display(head);


    // Delete from End
    deleteFromEnd(head);

    cout << "After Delete from End: ";
    display(head);


    // Delete by Value
    deleteValue(head, 20);

    cout << "After Delete Value 20: ";
    display(head);


    return 0;
}