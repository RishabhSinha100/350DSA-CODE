

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

node *sortLL(node*head){
//count all element;

int zero=0;
 int one=0;
  int two=0;
  node*temp=head;
   while(temp){
    if(temp->data==0){
        zero++;
    }
    else if(temp->data==1){
        one++;
    }
      else if(temp->data==2){
        two++;
    }
    temp=temp->next;
   }

   temp=head;
   while(temp){
    if(zero!=0){
        temp->data=0;
        zero--;
    }
     else if(one!=0){
        temp->data=1;
        one--;
    }  else if(two!=0){
        temp->data=2;
        two--;
    }

    temp=temp->next;
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
    insertAthead(head, tail, 0);
    insertAthead(head, tail, 2);
    insertAthead(head, tail, 0);
    insertAthead(head, tail, 1);
    insertAthead(head, tail, 1);

    print(head);

    sortLL(head);
    print(head);

    return 0;
}
