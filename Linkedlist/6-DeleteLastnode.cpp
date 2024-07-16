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

void deletenode(node*&head,node*&tail,int postion){
    node*curr=head;
    node*prev=NULL;

 int cnt=1;
  while(cnt<postion){
    prev=curr;
    curr=curr->next;
    cnt++;
  }
  prev->next = curr->next;
  if(curr==tail){
    tail=prev;
  }

   delete curr;

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
    insertAthead(head, tail, 3);
    cout<<"delete postion is 1"<<"before delete"<<" "<<endl;
    print(head);
    deletenode(head,tail,2);
   cout << endl << "after delete" << endl;
   print(head);

    return 0;
}
