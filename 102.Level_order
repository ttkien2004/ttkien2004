class Solution {
protected:
    vector <vector<int>> arr;
public:
    void LevelOrder(TreeNode* root){
        if(root == NULL) return;
        queue<TreeNode*> S;
        S.push(root);        
        while(!S.empty()){             
            int i = S.size();
            vector<int> v2;
            while(i>0) {
                root = S.front();
                v2.push_back(root->val);
                S.pop();
                i--;
                if(root->left != NULL) S.push(root->left);
                if(root->right != NULL) S.push(root->right);
            }            
            arr.push_back(v2);            
       
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        LevelOrder(root)   ;
        return arr;
    }
