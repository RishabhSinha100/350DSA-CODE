#include <iostream>
#include<stack>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val=this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void InsertAtBegin(Node *&head, Node *&tail, int d)
{

    // if list is empty
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void InsertAtTail(Node *&tail, Node *&head, int d)
{
    // if list is empty
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // InsertAtStart
    if (position == 1)
    {
        InsertAtBegin(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert At last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
        return;
    }

    ////creating a node for d

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position , Node*&head,Node*tail){
    
stack<int>s;
Node*temp=head;
while(temp){
    s.push(temp->data);
    temp=temp->next;

}

while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
}

int main()
{
    Node *node1 = new Node(1);
    node1->next = new Node(2);

    Node *head = node1;
    Node *tail = node1->next;

    print(head);
  
    InsertAtPosition(head, tail, 2, 4);
    print(head);
  
    InsertAtPosition(head, tail, 3, 7);
    print(head);
 

    deleteNode(4,head,tail);
    print(head);


return 0;
}
