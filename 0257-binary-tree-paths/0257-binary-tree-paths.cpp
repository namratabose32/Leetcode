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
    vector<string> ans;
    void path(TreeNode* root, string str){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            if(str!="")
                str+="->";
            str+=to_string(root->val);
            ans.push_back(str);
            return;
        }
        path(root->left,(str=="")?to_string(root->val):str+"->"+to_string(root->val));
        path(root->right,(str=="")?to_string(root->val):str+"->"+to_string(root->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        path(root,"");
        return ans;
    }
};