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



void insertAthead(node*& head, node*& tail, int n) {
    node* temp = new node(n);
    temp->next = head;
    head = temp;
    if (tail == NULL) {
        tail = temp;
    }
}

 void ForwordTraversal(node*head,node*tail){
    node*temp=head;
    while(temp){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
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
    insertAthead(head, tail, 5);
    ForwordTraversal(head,tail);
    // print(head);

    return 0;
}
