class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return 0;
        map<char,char> mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])==mp.end())
                mp[s[i]]=t[i];
            else{
                if(mp[s[i]]!=t[i])
                    return 0;
            }
        }
        mp.clear();
        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])==mp.end())
                mp[t[i]]=s[i];
            else{
                if(mp[t[i]]!=s[i])
                    return 0;
            }
        }return 1;
    }
};