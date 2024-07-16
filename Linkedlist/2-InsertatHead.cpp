 #include<iostream>
using namespace std;
 class  node
 {

 public:
  int data;
   node* next;
     node(int data){
        this->data=data;
         this->next=NULL;
     }
    
 };
 
insertAthead(node*&head,int n){
    node*temp=new node(n);
    temp->next=head;
    head=temp;
}
 



int main (){
node*node2=new node(1);
node*Head=node2;
insertAthead(Head,4);
 cout<<"creation is done";

}