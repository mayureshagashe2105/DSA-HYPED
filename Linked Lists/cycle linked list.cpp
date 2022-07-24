
// //Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//     };

class Solution {
public:
    bool hasCycle(ListNode *head1) {
        ListNode* head = head1;
        while (head != NULL && head->next != NULL)
        {
            head = head->next->next;
            head1 = head1->next;
            if (head == head1) return true;
        }
        return false;
    }
};
