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
    int rootToLeaf(TreeNode* root,int x){
        if(root==NULL){
            return 0;
        }
        x=x*10+root->val;
        if(!root->left && !root->right)
            return x;
        return rootToLeaf(root->left,x)+rootToLeaf(root->right,x);
    }
    int sumNumbers(TreeNode* root) {
        return rootToLeaf(root,0);
    }
};