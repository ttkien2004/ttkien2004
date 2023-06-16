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
        ListNode* head = new ListNode();
        ListNode* current = head;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){            
            int lv1 = (l1 != NULL)? l1->val : 0;
            int lv2 = (l2 != NULL)? l2->val : 0;
            
            int total = lv1 + lv2 + carry;

            current->next = new ListNode();            
            current->next->val = total%10;
            carry = total / 10;

            l1 = (l1 != NULL)? l1->next : NULL;
            l2 = (l2 != NULL)? l2->next : NULL;
            
            current = current->next;
            
        }
        return head->next;
    }
};
