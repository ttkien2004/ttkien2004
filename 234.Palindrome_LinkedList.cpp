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
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        /*Reverse the second half list*/
        ListNode* prev = NULL, *current, *net = slow;
        while(net != NULL){
            current = net;
            net = net->next;
            current->next = prev;
            prev = current;
        }
        while(head && current){
            if(head->val != current->val) return false;
            head = head->next;
            current = current->next;
        }
        return true;
    }
};
