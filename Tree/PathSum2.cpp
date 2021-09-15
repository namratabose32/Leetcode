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
    vector<vector<int>> res;
    void sum(TreeNode *root,int x,vector<int> ans){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            if(x-root->val==0){
                vector<int> base=ans;
                base.push_back(root->val);
                res.push_back(base);
            }return;
        }
        ans.push_back(root->val);
        sum(root->left,x-root->val,ans);
        sum(root->right,x-root->val,ans);
        ans.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        sum(root,targetSum,ans);
        return res;
    }
};
