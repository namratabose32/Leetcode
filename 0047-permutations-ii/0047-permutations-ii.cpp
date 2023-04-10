class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind,vector<int> nums){
        if(nums.size()==ind){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[ind]){
                continue;
            }
            swap(nums[i],nums[ind]);
            solve(ind+1,nums);
            
        }
        for(int i=nums.size()-1;i>=ind;i--)
            swap(nums[i],nums[ind]);
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(0,nums);
        return ans;
    }
};