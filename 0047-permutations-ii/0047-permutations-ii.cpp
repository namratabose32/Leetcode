class Solution {
public:
    set<vector<int>> ans;
    void solve(int ind,vector<int> &nums){
        if(nums.size()==ind){
            ans.insert(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(ind+1,nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        solve(0,nums);
        for(auto x:ans){
            res.push_back(x);
        }
        return res;
    }
};