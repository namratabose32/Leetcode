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
    int res=0;
    int binaryToDecimal(string str){
        int ans=0,power=0;
        while(str!=""){
            int x= str[str.length()-1]-'0';
            str.pop_back();
            if(x==1)
                ans+=pow(2,power);
            power++;
        }return ans;
    }
    void RootToLeaf(TreeNode* root,string str){
        if(root==NULL)
            return;
        str+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            res+=binaryToDecimal(str);
            return;
        }
        RootToLeaf(root->left,str);
        RootToLeaf(root->right,str);
        str.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        RootToLeaf(root,"");
        return res;
    }
};