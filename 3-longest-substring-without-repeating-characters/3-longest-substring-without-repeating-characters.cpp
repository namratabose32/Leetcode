class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256,-1);
        int start=-1,res=0;
        for(int i=0;i<s.length();i++){
            if(v[s[i]]>start)
                start=v[s[i]];
            v[s[i]]=i;
            res=max(res,i-start);
        }return res;
    }
};