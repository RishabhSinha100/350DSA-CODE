
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    l1 = reverseList(l1);
    l2 = reverseList(l2);
    
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
     int sum=0;
        
        if (l1) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->data;
            l2 = l2->next;
        }
         sum += carry;
        carry = sum / 10;
   
        Node* newNode = new Node(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }
    
    return reverseList(dummy->next);
}

void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    insertAtTail(head1, tail1, 2);
    insertAtTail(head1, tail1, 3);
    insertAtTail(head1, tail1, 9 );
    insertAtTail(head1, tail1, 3);
    insertAtTail(head1, tail1, 1);
    
    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    insertAtTail(head2, tail2, 1);
    insertAtTail(head2, tail2, 2);
    insertAtTail(head2, tail2, 5);
    insertAtTail(head2, tail2, 6);
    
    cout << "First number: ";
    printList(head1);
    cout << "Second number: ";
    printList(head2);
    
    Node* result = addTwoNumbers(head1, head2);
    
    cout << "Sum: ";
    printList(result);
    
    return 0;
}
