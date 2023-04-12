class Solution {
public:
    vector<string> ans;
    void solve(string digits,int ind,string temp,vector<string> combination){
        if(ind==digits.length()){
            ans.push_back(temp);
            return;
        }
        int d=digits[ind]-'0';
        for(auto x:combination[d]){
            solve(digits,ind+1,temp+x,combination);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return {};
        vector<string> combination={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        solve(digits,0,"",combination);
        return ans;
    }
};