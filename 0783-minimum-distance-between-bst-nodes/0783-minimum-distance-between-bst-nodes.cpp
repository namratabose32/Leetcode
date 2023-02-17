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
    int mn=INT_MAX,pre=-1;
    int minDiffInBST(TreeNode* root) {
        if(root->left) 
            int x=minDiffInBST(root->left);
        if(pre>=0)
            mn=min(mn,abs(root->val-pre));
        pre=root->val;
        if(root->right)
            int x=minDiffInBST(root->right);
        return mn;
    }
};