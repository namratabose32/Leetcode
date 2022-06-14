class Solution {
public:
    vector<vector<int>> dp;
    int solve(string &w1,string w2,int i,int j){
        if(i==w1.length() && j==w2.length())
            return 0;
        if(w1.length()==i || w2.length()==j)
            return max(w1.length()-i,w2.length()-j);
        if(dp[i][j]!=1000)
            return dp[i][j];
        if(w1[i]==w2[j])
            return solve(w1,w2,i+1,j+1);
        return dp[i][j]=1+min(solve(w1,w2,i,j+1),solve(w1,w2,i+1,j));
    }
    int minDistance(string word1, string word2) {
        dp.resize(word1.length()+1,vector<int>(word2.length()+1,1000));
        return solve(word1,word2,0,0);
        
    }
};