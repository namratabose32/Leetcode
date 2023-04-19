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
    // postorder -> left right root
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root==NULL)
            return postorder;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            if(node->left)
                st.push(node->left);
            
            if(node->right!=NULL)
                st.push(node->right);
            
            postorder.push_back(node->val);
        }
        reverse(postorder.begin(),postorder.end());
        return postorder;
    }
};