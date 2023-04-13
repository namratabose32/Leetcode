class Solution {
public:
    vector<vector<string>> ans;
    bool palindrome(string s){
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r])
                return 0;
            l++;
            r--;
        }return 1;
    }
    void solve(string s,int ind,vector<string> &arr){
        if(ind==s.length()){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(palindrome(s.substr(ind,i-ind+1))){
                arr.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,arr);
                arr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> arr;
        solve(s,0,arr);
        return ans;
    }
};