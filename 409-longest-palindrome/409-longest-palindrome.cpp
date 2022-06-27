class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(auto x:s)
            mp[x]++;
        int cnt=0,o=0;
        for(auto x:mp){
            if(x.second%2==1)
                o=1;
            cnt+=(x.second/2)*2;
        }
        cnt+=o;
        return cnt;
    }
};