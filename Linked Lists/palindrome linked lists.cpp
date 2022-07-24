/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> mid;
        ListNode* midnode = head;
        while (head != NULL && head->next != NULL)
        {
            head = head->next->next;
            mid.push(midnode->val);
            midnode = midnode->next;
        }
        if (head != NULL) mid.push(midnode->val);
        
        while(midnode != NULL)
        {
            if (mid.top() != midnode->val) return false;
            mid.pop();
            midnode = midnode->next;
        }
        return true;
    }
};
