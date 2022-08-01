class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n,0);
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    temp[i]=1;
                else{
                    int up=0,left=0;
                    if(i>0)
                        up=dp[j];
                    if(j>0)
                        left=temp[j-1];
                    temp[j]=up+left;
                }
            }
            dp=temp;
        }
        return dp[n-1];
    }
};