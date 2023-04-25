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
    bool pathSum(TreeNode* root,int targetSum){
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL){
            targetSum-=root->val;
            if(targetSum==0)
                return 1;
            return 0;
        }
        return pathSum(root->left,targetSum-root->val) || pathSum(root->right,targetSum-root->val); 
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return 0;
        }
        return pathSum(root,targetSum);
    }
};