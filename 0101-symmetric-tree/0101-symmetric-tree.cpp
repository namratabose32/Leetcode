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
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode*> left,right;
        left.push(root);
        right.push(root);
        while(!left.empty() && !right.empty()){
            int size=left.size();
            if(left.size()!=right.size())
                return 0;
            for(int i=0;i<size;i++){
                TreeNode* nodeL=left.top(),*nodeR=right.top();
                left.pop();
                right.pop();
                if(nodeL->val!=nodeR->val)
                    return 0;
                if(nodeL->left)
                    left.push(nodeL->left);
                if(nodeR->right)
                    right.push(nodeR->right);
                if(left.size()!=right.size())
                    return 0;
                if(nodeL->right)
                    left.push(nodeL->right);
                if(nodeR->left)
                    right.push(nodeR->left);
                if(left.size()!=right.size())
                    return 0;
            }   
        }return 1;
    }
};