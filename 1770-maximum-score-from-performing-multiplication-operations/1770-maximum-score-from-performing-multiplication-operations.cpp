class Solution {
public:
    int solve(int i,int n,int j,vector<vector<int>> &dp,vector<int> &nums,vector<int> &mul){
        if(mul.size()==j)
            return 0;
        if(dp[i][j]!=INT_MIN)
            return dp[i][j];
        int left=solve(i+1,n,j+1,dp,nums,mul)+(mul[j]*nums[i]);
        int right=solve(i,n,j+1,dp,nums,mul)+(mul[j]*nums[(n-1)-(j-i)]);
        return dp[i][j]=max(left,right);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size(),m=multipliers.size();
        vector<vector<int>> dp(m,vector<int>(m,INT_MIN));
        return solve(0,n,0,dp,nums,multipliers);
    }
};