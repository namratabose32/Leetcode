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
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=0;
        stack<pair<TreeNode*,int>> st;
        st.push({root,0});
        while(!st.empty()){
            auto [node,x]=st.top();
            st.pop();
            x=x*10+node->val;
            if(!node->left && !node->right)
                ans+=x;
            if(node->left)
                st.push({node->left,x});
            if(node->right)
                st.push({node->right,x});
            
        }return ans;
    }
};