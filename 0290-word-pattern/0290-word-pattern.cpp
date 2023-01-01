class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp;
        map<string,char> rev;
        int i=0;
        for(auto x:pattern){
            if(i>=s.length())
                return false;
            string str;
            while(i<s.length() && s[i]!=' '){
                str+=s[i++];
            }i++;
            if(mp.find(x)!=mp.end() && mp[x]!=str){
                return false;
            }else{
                mp[x]=str;
            }
            if(rev.find(str)!=rev.end() && rev[str]!=x){
                return false;
            }else{
                rev[str]=x;
            }
        }
        if(i<s.length())
            return false;
        return true;
    }
};