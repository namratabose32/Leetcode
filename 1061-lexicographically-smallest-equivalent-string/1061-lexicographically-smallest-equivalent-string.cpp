class Solution {
public:
    vector<int> dp=vector<int> (26,-1);
    int find(int x){
        if(dp[x]==-1)
            return x;
        return dp[x]=find(dp[x]);
    }
    void union_str(int x,int y){
        x=find(x);
        y=find(y);
        if(x!=y)
            dp[max(x,y)]=min(x,y);
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(int i=0;i<s1.size();i++){
            union_str(s1[i]-'a',s2[i]-'a');
        }
        for(int i=0;i<baseStr.size();i++)
            baseStr[i]=find(baseStr[i]-'a')+'a';
        return baseStr;
    }
};