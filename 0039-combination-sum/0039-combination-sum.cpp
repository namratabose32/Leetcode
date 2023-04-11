class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> & cand,int ind,int target,vector<int> &arr){
        if(target==0){
            ans.push_back(arr);
            return;
        }
        if(ind==cand.size() || target<0)
            return;
        //take
        arr.push_back(cand[ind]);
        solve(cand,ind,target-cand[ind],arr); // ind is not increased so as to take same number unllimited times
        //not take
        arr.pop_back();
        solve(cand,ind+1,target,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> arr;
        solve(candidates,0,target,arr);
        return ans;
    }
};