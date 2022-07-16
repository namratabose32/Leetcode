class Solution {
public:
    int mod=1e9+7;
    int func(int m,int n,int N,int maxMoves,int i,int j, vector<vector<vector<int>>> &dp){
        if(i<0 || j<0 || i>=m || j>=n){
            return 1;
        }
        if(N==maxMoves){
            return 0;
        }
        if(dp[N][i][j]!=-1)
            return dp[N][i][j]%mod;
        int t=0;
        t=(t+func(m,n,N+1,maxMoves,i+1,j,dp))%mod;
        t=(t+func(m,n,N+1,maxMoves,i,j+1,dp))%mod;
        t=(t+func(m,n,N+1,maxMoves,i-1,j,dp))%mod;
        t=(t+func(m,n,N+1,maxMoves,i,j-1,dp))%mod;
        dp[N][i][j]=t%mod;
        return dp[N][i][j]%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(maxMove+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return func(m,n,0,maxMove,startRow,startColumn,dp);
    }
};