class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> cand,int ind,vector<int> &arr,int target){
        
        if(target==0){
            ans.push_back(arr);
            return;
        }
        if(ind==cand.size() || target<0)
            return;
        // arr.push_back(cand[ind]);
        // solve(cand,ind+1,arr,target-cand[ind]);
        // arr.pop_back();
        // solve(cand,ind+1,arr,target);
        
        for(int i=ind;i<cand.size();i++){
            if(i>ind && cand[i]==cand[i-1])
                continue;
            if(target<0)
                break;
            arr.push_back(cand[i]);
            solve(cand,i+1,arr,target-cand[i]);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        solve(candidates,0,temp,target);
        return ans;
    }
};