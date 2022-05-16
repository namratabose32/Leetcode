class Solution {
public:
    // int func(vector<vector<int>> triangle,int i,int j,vector<vector<int>> &dp){
    //     if(i==triangle.size()-1)
    //         return triangle[i][j];
    //     if(dp[i][j] != -1)
    //         return dp[i][j];
    //     int d=0,dg=0;
    //     //if(i<triangle.size())
    //         d=triangle[i][j]+ func(triangle,i+1,j,dp);
    //     //if(i<triangle.size() && j<triangle[i].size())
    //         dg=triangle[i][j]+func(triangle,i+1,j+1,dp);
    //     return dp[i][j]=min(d,dg);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        for(int j=0;j<n;j++){
            dp[n-1][j]=triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int d=triangle[i][j]+dp[i+1][j];
                int dg=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(dg,d);
            }
        }
        return dp[0][0];
    }
};