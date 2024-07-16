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
    node*temp=head;

    if(postion==1){
        temp=temp->next;
        head=temp;
       
    }
    //    delete curr;



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
    insertAthead(head, tail, 3);
    insertAthead(head, tail, 3);
    cout<<"delete postion is 1"<<"before delete"<<" "<<endl;
    print(head);
    deletenode(head,tail,1);
   cout << endl << "after delete" << endl;
   print(head);

    return 0;
}
