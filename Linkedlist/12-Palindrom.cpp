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
  
 bool palindrom(node*&head,node*&tail){
    stack<int>s;
    node*temp=head;

    while(temp){
        s.push(temp->data);
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(temp->data!=s.top()){
         return false;
        }
       s.pop();
       temp=temp->next;
    }
    return true;

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

    insertAthead(head, tail, 1);
    insertAthead(head, tail, 1);
    insertAthead(head, tail, 4);
    insertAthead(head, tail, 1);
   if (palindrom(head, tail)){
 cout<<"it is a palindrom";
   }
   else{
    cout<<"it is not a palindrom";
   }


 

  \
    return 0;
}
