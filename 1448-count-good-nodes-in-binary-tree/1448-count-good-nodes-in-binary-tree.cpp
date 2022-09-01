/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=0;
    void func(TreeNode* root,int curr){
        if(root==NULL){
            //c++;
            return;
        }
        if(root->val>=curr){
            c++;
            curr=root->val;
        }
        func(root->left,curr);
        func(root->right,curr);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        func(root,root->val);
        return c;
        
    }
};