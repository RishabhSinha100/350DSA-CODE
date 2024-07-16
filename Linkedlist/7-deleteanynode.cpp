#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertattail(node*& tail, int n) {
    node* temp = new node(n);
    tail->next = temp;
    tail = temp;
}

void insertAthead(node*& head, node*& tail, int n) {
    node* temp = new node(n);
    temp->next = head;
    head = temp;
    if (tail == NULL) {
        tail = temp;
    }
}

void insertAtPosition(node*& head, node*& tail, int n, int position) {
    if (position == 1) {
        insertAthead(head, tail, n);
        return;
    }

    int cnt = 1;
    node* temp = head;
    while (cnt < position - 1 && temp != nullptr) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    if (temp->next == nullptr) {
        insertattail(tail, n);
        return;
    }

    node* newnode = new node(n);
    newnode->next = temp->next;
    temp->next = newnode;
}

void deletenode(node*& head, node*& tail, int position) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    node* prev = nullptr;
    node* curr = head;
    int cnt = 1;

    // Case 1: Deleting the head node
    if (position == 1) {
        head = head->next;
        delete curr;
        if (head == nullptr) {
            tail = nullptr; 
        }
        cout << "Node deleted from position 1" << endl;
        return;
    }

    // Case 2: Deleting a node other than the head
    while (curr != nullptr && cnt < position) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if (curr == nullptr) {
        cout << "Position out of range. Node not deleted." << endl;
        return;
    }

    prev->next = curr->next;
    if (curr == tail) {
        tail = prev; // Update tail if last node is deleted
    }
    delete curr;
    cout << "Node deleted from position " << position << endl;
}










void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    node* node2 = new node(1);
    node* head = node2;
    node* tail = node2;

    insertAthead(head, tail, 4);
    insertattail(tail, 6);
    insertAtPosition(head, tail, 10, 1);
    insertAtPosition(head, tail, 8, 5); // Inserts at the end
    print(head);
    deletenode(head, tail, 3);
    cout<<endl;
    // deletenode(head, tail, 1); // Uncomment to delete node at position 1
    print(head);

    cout << endl << "Creation is done" << endl;

    return 0;
}
