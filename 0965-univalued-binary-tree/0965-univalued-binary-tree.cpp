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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return 1;
        stack<TreeNode*> st;
        st.push(root);
        int val=root->val;
        while(!st.empty()){
            int size=st.size();
            for(int i=0;i<size;i++){
                TreeNode* node=st.top();
                st.pop();
                if(val!=node->val)
                    return 0;
                if(node->left)
                    st.push(node->left);
                if(node->right)
                    st.push(node->right);
            }
        }return 1;
    }
};