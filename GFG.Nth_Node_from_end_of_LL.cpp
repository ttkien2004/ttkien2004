class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node* prev = NULL, *cur = head, *next;
           int count = 0;
           while(next != NULL){
               next = cur->next;
               cur->next = prev;
               prev = cur;
               cur = next;
               count +=1;
           }
           if(n > count) return -1;
           for(int i = 1; i < n; i++){
               prev = prev->next;
           }
           return prev->data;
    }
};
               prev = prev->next;
           }
           return prev->data;
    }
};
