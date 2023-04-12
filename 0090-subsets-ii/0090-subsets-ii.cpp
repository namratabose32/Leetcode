class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> nums,int ind,vector<int> &arr){
        if(ind==nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        solve(nums,ind+1,arr);
        arr.pop_back();
        while(ind+1<nums.size() && nums[ind]==nums[ind+1])
            ind++;
        solve(nums,ind+1,arr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        solve(nums,0,arr);
        return ans;
    }
};