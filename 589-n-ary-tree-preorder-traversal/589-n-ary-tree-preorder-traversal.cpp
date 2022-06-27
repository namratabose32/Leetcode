/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void func(Node* root,vector<int> &arr){
        if(root!=NULL){
            arr.push_back(root->val);
            for(Node* child:root->children)
                func(child,arr);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        func(root,ans);
        return ans;
    }
};