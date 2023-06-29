class Solution {
public:
    int solve(vector<vector<int>> &dp,int i,int j){
        if(i==0 && j==0)
            return dp[0][0]=1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int left=0,right=0;
        if(j!=0)
            left=solve(dp,i,j-1);
        if(i!=0)
            right=solve(dp,i-1,j);
        return dp[i][j]=left+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        solve(dp,m-1,n-1);
        return dp[m-1][n-1];
    }
};