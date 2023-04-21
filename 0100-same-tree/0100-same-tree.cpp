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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return 1;
        if(!q || !p)
            return 0;
        stack<TreeNode*> stp,stq;
        stp.push(p);
        stq.push(q);
        while(!stp.empty() && !stq.empty()){
            TreeNode* nodep=stp.top(),*nodeq=stq.top();
            stp.pop();
            stq.pop();
            if(nodep->val!=nodeq->val)
                return 0;
            if(nodep->left)
                stp.push(nodep->left);
            if(nodeq->left)
                stq.push(nodeq->left);
            if(stp.size()!=stq.size())
                return 0;
            if(nodeq->right)
                stq.push(nodeq->right);
            if(nodep->right)
                stp.push(nodep->right);
            if(stp.size()!=stq.size())
                return 0;
        }
        return 1;
    }
};