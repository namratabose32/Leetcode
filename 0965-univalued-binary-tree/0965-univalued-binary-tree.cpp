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
public:int val;
    bool solve(TreeNode* root){
        if(root==NULL)
            return 1;
        if(root->val!=val)
            return 0;
        bool ans=1;
        if(root->left)
            ans=ans && solve(root->left);
        if(root->right)
            ans=ans && solve(root->right);
        return ans;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return 1;
        val=root->val;
        return solve(root);
    }
};