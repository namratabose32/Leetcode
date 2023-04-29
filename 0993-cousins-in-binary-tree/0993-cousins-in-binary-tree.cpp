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
    int Height(TreeNode* root,int val,int &parent,int height){
        if(root==NULL)
            return 0;
        if(root->val==val)
            return height;
        parent=root->val;
        int left=Height(root->left,val,parent,height+1);
        //value mil gaya ab age kyu khojna direct return maro na
        if(left)
            return left;
        parent = root->val;
        int right=Height(root->right,val,parent,height+1);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        // matlb ya toh parent same h ya height hi alag h
        if(root->val==x || root->val==y)
            return 0;
        int xParent =-1,yParent=-1;
        int xHeight=Height(root,x,xParent,0);
        int yHeight=Height(root,y,yParent,0);
        if(xParent!=yParent && xHeight==yHeight)
            return 1;
        return 0;
    }
};