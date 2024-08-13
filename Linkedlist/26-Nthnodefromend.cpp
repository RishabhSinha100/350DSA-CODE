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

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* nthFromEnd(Node* head, int n) {
    Node* first = head;
    Node* second = head;

    // Move the first pointer n steps ahead
    for (int i = 0; i < n; ++i) {
        if (first == nullptr) 
        {return nullptr;}
        else{ 
        first = first->next;
        }
    }

    // Move both pointers until the first pointer reaches the end
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }

    return second;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    cout << "Linked list: ";
    printList(head);

    int n = 7;
    Node* result = nthFromEnd(head, n);
    if (result) {
        cout << "The " << n << "th node from the end is: " << result->data << endl;
    } else {
        cout << "The list is shorter than " << n << " nodes." << endl;
    }

    return 0;
}
