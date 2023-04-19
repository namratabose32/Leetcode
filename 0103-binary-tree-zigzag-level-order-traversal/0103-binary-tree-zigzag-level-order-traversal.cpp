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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        if(root==NULL)
            return zigzag;
        queue<TreeNode*> que;
        que.push(root);
        int temp=0;
        while(!que.empty()){
            int size=que.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=que.front();
                que.pop();
                level.push_back(node->val);
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            if(temp==1){
                reverse(level.begin(),level.end());
                temp=0;
            }else{
                temp=1;
            }
            zigzag.push_back(level);
        }
        return zigzag;
    }
};