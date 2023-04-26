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
    vector<vector<int>> ans;
    void path(TreeNode* root,int target,vector<int> arr){
        if(root==NULL)
            return;
        arr.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(target-root->val==0)
                ans.push_back(arr);
            return;
        }
        path(root->left,target-root->val,arr);
        path(root->right,target-root->val,arr);
        arr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> arr;
        path(root,targetSum,arr);
        return ans;
    }
};