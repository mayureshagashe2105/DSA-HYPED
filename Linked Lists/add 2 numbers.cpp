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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* temp_head = NULL;

        
        int sum1 = 0, rem, quo = 0;
        while(l1 != NULL || l2 != NULL || quo != 0)
        {
            
            if (l1 == NULL) l1 = new ListNode(0);
            if (l2 == NULL) l2 = new ListNode(0);
            
            sum1 = l1->val + l2->val + quo;
            
            quo = sum1 / 10;
            rem = sum1 % 10;
            
            l1 = l1->next;
            l2 = l2->next;
            
            ListNode* new_node = NULL;
            new_node = new ListNode;
            new_node->val = rem;
            
            if (head == NULL)
            {
                head = new_node;
                temp_head = new_node;
            }
            else
            {
                temp_head->next = new_node;
                temp_head = new_node;
            }
                
        }
        return head;

    }
};
