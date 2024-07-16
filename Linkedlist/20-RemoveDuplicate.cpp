

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

node*Removedupliacete(node*head){
    if(head==NULL){
        return NULL;
    }
     node*curr=head;
    while(curr!=NULL){

if((curr->next!=nullptr)&&(curr->data==curr->next->data)){

    node*nextvalue=curr->next;
    node*nextkinext=curr->next->next;
    curr->next=nextkinext;
    delete(nextvalue);
}
else{
    curr=curr->next;
}

    }
    return head;
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
    insertAthead(head, tail, 2);
    insertAthead(head, tail, 2);
    insertAthead(head, tail, 4);
    insertAthead(head, tail, 7);
    insertAthead(head, tail, 7);

    print(head);

    Removedupliacete(head);
    print(head);

    return 0;
}
