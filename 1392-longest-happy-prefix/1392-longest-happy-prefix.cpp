class Solution {
public:
    string longestPrefix(string s) {
        //This memory limit is exceeded in this method
    /*
        unordered_set<string>prefix;
        string pre;
        for(int i=0;i<s.length()/2;i++){
            pre=pre+s[i];
            prefix.insert(pre);
        }
        string suf;
        string ans="";
        for(int i=s.length()-1;i>=1;i--){
            suf=s[i]+suf;
            if(prefix.find(suf)!=prefix.end()){
                ans=suf;
            }                
        }return ans;
    */
        
        long pre=0,suf=0,len=0,mul=1;
        int mod=1e9+7;
        for(int i=0,j=s.length()-1;j>0;j--,i++){
            int prefix=s[i]-'a';
            int suffix=s[j]-'a';
            pre=(pre*10+prefix)%mod;
            suf=(suf+mul*suffix)%mod;
            mul=mul*10%mod;
            if(pre==suf)
                len=i+1;
        }return s.substr(0,len);
    }
};