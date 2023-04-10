class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind,vector<int> & nums){
        if(nums.size()==ind){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(ind+1,nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        solve(0,nums);
        return ans;
    }
};