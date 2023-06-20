/*Breadth First Search*/
#include <iostream>
#include <queue>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int val){
    BstNode* temp = new BstNode();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
BstNode* Insert(BstNode* root, int val){
    if(root == NULL) root = GetNewNode(val);
    else if(val <= root->data) root->left = Insert(root->left, val);
    else root->right = Insert(root->right, val);

    return root;
}

void LevelOrder(BstNode* root){
    if(root == NULL) {cout << "Tree is empty"; return;}
    queue <BstNode*> S;
    S.push(root);
    while(!S.empty()){
        root = S.front();
        cout << root->data << " ";
        if(root->left != NULL) S.push(root->left);
        if(root->right != NULL) S.push(root->right);
        S.pop();
    }
}
int main()
{
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 8);
    root = Insert(root, 12);
    root = Insert(root, 20);
    root = Insert(root, 17);
    root = Insert(root, 25);

    LevelOrder(root);
    cout << '\n';
    cout << root->data;
}
