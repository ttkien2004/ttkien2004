/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                ListNode* slow2 = head;
                if(slow2 == slow) return slow2;
                while(true){
                    slow2 = slow2->next;
                    slow = slow->next;
                    if(slow2 == slow) return slow2;
                }
            }
        }
        return NULL;
    }
};
