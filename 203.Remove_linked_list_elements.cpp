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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        ListNode* newarr = new ListNode();
        ListNode* current = newarr;  
        int count = 0;      
        while(head != NULL){            
            if(head->val != val){
                current->next = new ListNode();
                current->next->val = head->val;
                current = current->next;
                count++;
            }
            head = head->next;
        }
        if(count) {                          
            current = NULL;
            return newarr->next;
        }
        else return NULL;
        
    }
};
