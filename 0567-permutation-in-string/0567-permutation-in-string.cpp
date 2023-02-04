class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1v(26,0),s2v(26,0);
        int s1n=s1.length(),s2n=s2.length();
        if(s1n>s2n)
            return 0;
        for(auto x:s1)
            s1v[x-'a']++;
        for(int i=0;i<s1n;i++)
            s2v[s2[i]-'a']++;
        if(s1v==s2v)
            return 1;
        for(int i=s1n;i<s2n;i++){
            s2v[s2[i-s1n]-'a']--;
            s2v[s2[i]-'a']++;
            if(s1v==s2v)
                return 1;
        }return 0;
    }
};