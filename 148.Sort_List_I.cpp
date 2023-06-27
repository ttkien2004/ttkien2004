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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        ListNode* temp1 = temp;
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        while(temp != NULL){
            temp->val = arr[i++];
            temp = temp->next;
        }
        return temp1;
    }
};
