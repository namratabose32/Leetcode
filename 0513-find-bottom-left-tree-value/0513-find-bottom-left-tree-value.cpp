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
    int findBottomLeftValue(TreeNode* root) {
        stack<pair<TreeNode*,int>> s;
        s.push({root,0});
        int ans=root->val,lev=0;
        while(!s.empty()){
            int level=s.top().second;
            TreeNode* node=s.top().first;
            s.pop();
            if(lev<level){
                ans=node->val;
                lev=level;
            }
            
            if(node->right!=NULL)
                s.push({node->right,level+1});
            if(node->left!=NULL)
                s.push({node->left,level+1});
        }return ans;
    }
};