class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(auto c:t){
            if(c==s[j]){
                j++;
            }
            if(j==s.length())
                return 1;
        }
        if(j==s.length())
            return 1;
        return 0;
    }
};