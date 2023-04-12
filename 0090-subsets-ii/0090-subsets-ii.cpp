class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> nums,int ind,vector<int> &arr){
        ans.push_back(arr);
        if(ind==nums.size()){
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1])
                continue;
            arr.push_back(nums[i]);
            solve(nums,i+1,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        solve(nums,0,arr);
        return ans;
    }
};