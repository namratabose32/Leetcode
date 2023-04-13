class Solution {
public:
    vector<string> ans;
    void solve(int n, int open,int close,string s){
        if(n==close){
            ans.push_back(s);
            return;
        }
        if(open>close){
            s.push_back(')');
            solve(n,open,close+1,s);
            s.pop_back();
        }
        if(open<n){
            s.push_back('(');
            solve(n,open+1,close,s);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(n,0,0,"");
        return ans;
    }
};