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

node* reverse(node*& head) {
node*prev=NULL;
node*forward=NULL;
node*curr=head;
while(curr){
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
}
   head=prev;
  return prev;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<" "<<endl;
}

int main() {
    node* node2 = new node(1);
    node* head = node2;
    node* tail = node2;

    insertAthead(head, tail, 1);
    insertAthead(head, tail, 1);
    insertAthead(head, tail, 4);
    insertAthead(head, tail, 1);
    print(head);
    reverse(head);
    print(head);

    return 0;
}
