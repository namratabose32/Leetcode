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
    void path(TreeNode* root,int s,int sum,vector<int> v){
        if(root==NULL){
            return;
        }
        
        if(root->left==NULL && root->right==NULL){
            if(s+root->val==sum){
                v.push_back(root->val);
                ans.push_back(v);
            }return;
        }
        v.push_back(root->val);
        path(root->left,s+root->val,sum,v);
        path(root->right,s+root->val,sum,v);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return ans;
        }vector<int> v;
        path(root,0,targetSum,v);
        return ans;
    }
};