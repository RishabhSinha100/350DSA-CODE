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
int searchvalue(node*head,node*tail,int value,int&index,int&element){
    node*temp=head;
    
    while (temp)
    {
       if(value==temp->data){
        return temp->data;
       }  
       index++;
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
int index=0;
int element=0;
    insertAthead(head, tail, 4);
    insertAthead(head, tail, 5);
    insertAthead(head, tail, 3);
    cout<<index<<"   "<<searchvalue(head,tail,4,index,element)<<endl;
 

    print(head);

    return 0;
}
