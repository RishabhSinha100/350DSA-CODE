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
   void backwardTraversal(node*head) {
        std::stack<int> s;
        node* temp = head;
        while (temp) {
            s.push(temp->data);
            temp = temp->next;
        }
        while (!s.empty()) {
            std::cout << s.top() << " ";
            s.pop();
        }
        std::cout << std::endl;
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
    backwardTraversal(head);

    // print(head);

    return 0;
}
