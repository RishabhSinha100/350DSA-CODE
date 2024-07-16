#include<iostream>
#include<stack>
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

void insertAthead(node*& head, node*& tail, int n) {
    node* temp = new node(n);
    temp->next = head;
    head = temp;
    if (tail == NULL) {
        tail = temp;
    }
}

node* soleve(node* first, node* second) {
    node* curr1 = first;
    node* next1 = curr1->next;

    node* curr2 = second;
    node* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {
        if ((curr1->data <= curr2->data) && (next1->data >= curr2->data)) {
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr1->next;
            next1 = curr1->next;
            curr2 = next2;
            if (next2 != NULL) {
                next2 = next2->next;
            }
        } else {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
    }\
    return first;
}

node* margetwosorted(node* first, node* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }

    if (first->data <= second->data) {
        return soleve(first, second);
    } else {
        return soleve(second, first);
    }
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << " " << endl;
}

int main() {
    // firstLL
    node* node2 = new node(12);
    node* head = node2;
    node* tail = node2;
    insertAthead(head, tail, 11);
    insertAthead(head, tail, 10);
    insertAthead(head, tail, 8);
    insertAthead(head, tail, 6);
    insertAthead(head, tail, 5);
    insertAthead(head, tail, 2);
    print(head);

    //  secondLL
    node* node1 = new node(22);
    node* head1 = node1;
    node* tail1 = node1;
    insertAthead(head1, tail1, 21);
    insertAthead(head1, tail1, 19);
    insertAthead(head1, tail1, 18);
    insertAthead(head1, tail1, 9);
    insertAthead(head1, tail1, 7);
    insertAthead(head1, tail1, 6);
    print(head1);

    // Merging two sorted linked lists
    node* mergedHead = margetwosorted(head, head1);
    print(mergedHead);

    return 0;
}
