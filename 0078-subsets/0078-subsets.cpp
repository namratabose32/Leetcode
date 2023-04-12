class Solution {
public:vector<vector<int>> ans;
    void solve(vector<int> &nums,int ind,vector<int> &arr){
        ans.push_back(arr);
        if(ind==nums.size()){
            //ans.push_back(arr);
            return;
        }
        // //take
        // arr.push_back(nums[ind]);
        // solve(nums,ind+1,arr);
        // //not take
        // arr.pop_back();
        // solve(nums,ind+1,arr);
        
        for(int i=ind;i<nums.size();i++){
            arr.push_back(nums[i]);
            solve(nums,i+1,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        solve(nums,0,arr);
        return ans;
    }
};