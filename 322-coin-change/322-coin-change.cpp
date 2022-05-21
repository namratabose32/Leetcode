class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n=amount;
        vector<int> dp(++n);
        dp[0]=0;
        for(int i=1;i<n;i++){
            dp[i]=INT_MAX;
            for(auto c:coins){
                if(i-c<0)
                    break;
                if(dp[i-c]!=INT_MAX)
                    dp[i]=min(dp[i-c]+1,dp[i]);
            }
        }
        return dp[--n]==INT_MAX?-1:dp[n];
    }
};