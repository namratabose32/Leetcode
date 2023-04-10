class Solution {
public:
    vector<vector<int>> ans;
    void solve(int k,int n,int ind,vector<int> &dp){
        if(dp.size()==k){
            ans.push_back(dp);
            return;
        }
        if(ind>n)
            return;
        dp.push_back(ind);
        solve(k,n,ind+1,dp);
        dp.pop_back();
        solve(k,n,ind+1,dp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> dp;
        solve(k,n,1,dp);
        return ans;
    }
};