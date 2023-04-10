class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> nums,vector<int> &arr,vector<int> &temp){
        if(arr.size()==nums.size()){
            ans.push_back(arr);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!temp[i]){
                arr.push_back(nums[i]);
                temp[i]=1;
                solve(nums,arr,temp);
                temp[i]=0;
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr,temp(n,0);
        solve(nums,arr,temp);
        return ans;
    }
};