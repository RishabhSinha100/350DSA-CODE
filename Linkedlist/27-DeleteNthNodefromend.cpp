class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move first n+1 steps ahead
        for (int i = 0; i <= n; ++i) {
            if (first == nullptr) {
                return head; // If n is larger than the number of nodes
            }
            first = first->next;
        }

        // Move first to the end, maintaining the gap
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Second is now just before the node to be deleted
        ListNode* nodeToDelete = second->next;
        second->next = nodeToDelete->next;
        delete nodeToDelete; 

        // Return the head of the modified list
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};