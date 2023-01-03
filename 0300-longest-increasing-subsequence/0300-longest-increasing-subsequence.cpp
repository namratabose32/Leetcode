class Solution {
public:
    int solve(vector<int> nums,int index,int prev,vector<vector<int>> &dp){
        if(index==nums.size())
            return 0;
        if(dp[index][prev+1]!=-1)
            return dp[index][prev+1];
        int len=0+solve(nums,index+1,prev,dp);
        if(prev==-1 || nums[index]>nums[prev]){
            len=max(len,1+solve(nums,index+1,index,dp));
        }
        return dp[index][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(nums.size()+1,0), curr(n+1,0);
        
        for(int index=n-1;index>=0;index--){
            for(int prev=index-1;prev>=-1;prev--){
                int len=0+dp[prev+1];
                if(prev==-1 || nums[index]>nums[prev]){
                    len=max(len,1+dp[index+1]);
                }
                curr[prev+1]=len;
            }dp=curr;
        }
        
        return dp[0];
    }
};