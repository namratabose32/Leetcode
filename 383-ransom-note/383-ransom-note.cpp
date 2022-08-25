class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(auto c:magazine)
            mp[c]++;
        map<char,int> r;
        for(auto c:ransomNote)
            r[c]++;
        for(auto x:r){
            if(mp.find(x.first)==mp.end() || mp[x.first]<r[x.first])
                return false;
        }return true;
    }
};