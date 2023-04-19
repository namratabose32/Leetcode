class Solution {
public:
    vector<string> ans;
    void solve(string s,int ind){
        if(ind==s.length()){
            ans.push_back(s);
            return;
        }
        if(isdigit(s[ind])){
            solve(s,ind+1);
        }else{
            s[ind]=tolower(s[ind]);
            solve(s,ind+1);
            s[ind]=toupper(s[ind]);
            solve(s,ind+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,0);
        return ans;
    }
};