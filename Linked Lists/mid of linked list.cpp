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
    ListNode* middleNode(ListNode* head) {
        ListNode* mid = head;
        int count = 0;
        while(head->next != NULL)
        {
            head = head->next;
            ++count;
            if (count == 2 || head->next == NULL)
            {
                mid = mid->next;
                count = 0;
            }
        }
        return mid;
        
    }
};
