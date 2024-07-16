//  #include<iostream>
// using namespace std;
//  class  node
//  {

//  public:
//   int data;
//    node* next;
//      node(int data){
//         this->data=data;
//          this->next=NULL;
//      }
    
//  };
 
// insertattail(node*&tail,node*&head,int n){
//     node*temp=new node(n);
//   tail->next=temp;
//   tail=temp;

// }
// insertAthead(node*&head,int n){
//     node*temp=new node(n);
//     temp->next=head;
//     head=temp;
// }
 
//  void print(node*head, node*tail)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
// }



// int main (){
// node*node2=new node(1);
// node*head=node2;
// node*tail=node2;
// insertAthead(head,4);
// insertattail(tail,head,6);
// print(head,tail);

//  cout<<"creation is done";

// }



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

void insertattail(node*& tail, int n) {
    node* temp = new node(n);
    tail->next = temp;
    tail = temp;
}

void insertAthead(node*& head, node*& tail, int n) {
    node* temp = new node(n);
    temp->next = head;
    head = temp;
    
  
}
 void inseratpostion(node*&head, node*&tail,int n,int position){

     int cnt=1;
      node*temp=head;
  while (cnt<position-1) {
      temp=temp->next;
      cnt++;
    }
    node*newnode=new node(n);

   newnode->next=temp->next;
   temp->next=newnode;


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

    // insertAthead(head, tail, 4);
    insertattail(tail, 6);
    inseratpostion(head,tail,10,2);
    print(head);


    cout << "creation is done" << endl;

    return 0;
}
