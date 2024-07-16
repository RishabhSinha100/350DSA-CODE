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

bool Detectloop(node*& head) {
    map<node*,bool>visited;
    node*temp=head;
    while(temp){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;

    }
    return false;
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
    insertAthead(head, tail, 1);
    insertAthead(head, tail, 4);
    insertAthead(head, tail, 1);
    tail->next=head->next;
    // print(head);
    if(Detectloop(head)){
        cout<<"loop is present";
    }
    else{
        cout<<" loop is not present";
    }
    // print(head);

    return 0;
}
