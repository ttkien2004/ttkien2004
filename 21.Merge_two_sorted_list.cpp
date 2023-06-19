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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {                
        if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;

        ListNode* head = l1;
        if(l1->val > l2->val){
            head = l2;
            l2 = l2->next;
        }else{
            head = l1;
            l1 = l1->next;
        }
        ListNode* current = head;
        while(l1 != NULL && l2 != NULL){
            ListNode* temp = new ListNode();
            if(l1->val < l2->val){
                temp->val = l1->val;
                l1 = l1->next;                            
            }else{
                temp->val = l2->val;
                l2 = l2->next;
            }
            current->next = temp;
            current = temp;
        }
        if(l1 != NULL) {            
            current->next = l1;            
        }else if(l2 != NULL){                        
            current->next = l2;
        }
        return head;
    }
};
