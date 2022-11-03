class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0,t=0;
        map<string,int> mp;
        for(auto x:words){
            if(x[0]==x[1]){
                if(mp[x]>0){
                    mp[x]--;
                    ans+=4;
                    t--;
                }else{
                    mp[x]++;
                    t++;
                }
            }else{
                string s=x;
                reverse(s.begin(),s.end());
                if(mp[s]>0){
                    mp[s]--;
                    ans+=4;
                }else{
                    mp[x]++;
                }
            }
        }
        if(t>0)
            ans+=2;
        return ans;
    }
};