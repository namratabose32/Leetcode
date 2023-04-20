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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<pair<TreeNode*,unsigned long long int>> que;
        que.push({root,0});
        int ans=0;
        while(!que.empty()){
            unsigned long long int left=que.front().second,right=0,size=que.size();
            for(int i=0;i<size;i++){
                TreeNode* node=que.front().first;
                right=que.front().second;
                que.pop();
                if(node->left)
                    que.push({node->left,2*right+1});
                if(node->right)
                    que.push({node->right,2*right+2});
                ans=max(ans,int(right-left+1));
            }
        }return ans;
    }
};