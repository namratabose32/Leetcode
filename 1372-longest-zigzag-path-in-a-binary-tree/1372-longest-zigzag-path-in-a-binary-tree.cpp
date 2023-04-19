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
    int ans=0;
    void solve(TreeNode* root,int temp,int step){
        if(root==NULL)
            return;
        ans=max(ans,step);
        if(temp==0){
            solve(root->left,1,step+1);
            solve(root->right,0,1);
        }else{
            solve(root->right,0,step+1);
            solve(root->left,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root,0,0);
        solve(root,1,0);
        return ans;
    }
};