class Solution {
public:
    vector<string> ans;
    void solve(string s,int ind){
        if(ind==s.length()){
            return;
        }
        if(s[ind]>='0' && s[ind]<='9')
            solve(s,ind+1);
        if(s[ind]>='a' && s[ind]<='z'){
            string str=s;
            str[ind]-=32;
            ans.push_back(str);
            solve(s,ind+1);
            solve(str,ind+1);
        }
        if(s[ind]>='A' && s[ind]<='Z'){
            string str=s;
            str[ind]+=32;
            ans.push_back(str);
            solve(s,ind+1);
            solve(str,ind+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,0);
        ans.push_back(s);
        return ans;
    }
};