class Solution {
public:
    vector<vector<int>> vec;
    void solve(vector<int> cand,int target,int index,vector<int> &res){
        if(target==0){
            vec.push_back(res);
            return;
        }
        if(target<0 || index>=cand.size())
            return;
        for(int i=index;i<cand.size();i++){
            if(i>index && cand[i]==cand[i-1])
                continue;
            if(target<cand[i])
                break;
            res.push_back(cand[i]);
            solve(cand,target-cand[i],i+1,res);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,res);
        return vec;
    }
};