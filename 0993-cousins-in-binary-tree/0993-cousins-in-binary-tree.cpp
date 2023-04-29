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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return 0;
        queue<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            int size=st.size();
            int a=0;
            for(int i=0;i<size;i++){
                TreeNode* node=st.front();                
                st.pop();
                if(node->left && node->right && (node->left->val==x && node->right->val==y || (node->left->val==y && node->right->val==x)))
                    return 0;
                if(node->right){
                    st.push(node->right);
                    if(node->right->val==x || node->right->val==y)
                        a++;
                }
                if(node->left){
                    st.push(node->left);
                    if(node->left->val==x || node->left->val==y)
                        a++;
                }                
            }
            if(a==2)
                return 1;            
        }return 0;
    }
};