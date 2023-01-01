class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &cand,int target,vector<int> &res,int index){
        if(target==0){
            ans.push_back(res);
            return;
        }
        if(target<0 || index>=cand.size())
            return;
        res.push_back(cand[index]);
        solve(cand,target-cand[index],res,index);
        res.pop_back();
        solve(cand,target,res,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        solve(candidates,target,res,0);
        return ans;
    }
};