    #include<iostream>
#include<stack>
#include<map>
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

node* startingloop(node*& head) {
    
    node*fast=head;
    node*slow=head;

    while(fast!=NULL||slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            slow=head;
            break;
        }

    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    
   
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

    insertAthead(head, tail, 9);
    insertAthead(head, tail, 0);
    insertAthead(head, tail, 90);
    insertAthead(head, tail, 1);
    tail->next=head->next;
    // print(head);
    cout<<startingloop(head)->data;
 

    return 0;
}
