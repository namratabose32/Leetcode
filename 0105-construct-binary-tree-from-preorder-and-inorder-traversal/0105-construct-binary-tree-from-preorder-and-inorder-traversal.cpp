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
    TreeNode* buildT(vector<int> &in,int is,int ie,vector<int> &pre,int ps,int pe,unordered_map<int,int> &mp){
        if(ps>pe || is>ie)
            return NULL;
        TreeNode* root=new TreeNode(pre[ps]);
        int iroot=mp[root->val];
        int left=iroot-is;
        root->left=buildT(in,is,iroot-1,pre,ps+1,ps+left,mp);
        root->right=buildT(in,iroot+1,ie,pre,ps+left+1,pe,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return buildT(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,mp);
    }
};