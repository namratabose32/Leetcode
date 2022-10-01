class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')
            return 0;
        int c=1,res=1,prev;
        for(int i=1;i<s.size();i++){
            prev=res;
            if(s[i]=='0')
                res=0;
            if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<'7'))
                res+=c;
            c=prev;
        }return res;
    }
};