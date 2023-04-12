class Solution {
public:
    vector<string> ans;
    void solve(string digits,int ind,string temp,unordered_map<int,vector<char>> & mp){
        if(ind==digits.length()){
            ans.push_back(temp);
            return;
        }
        int d=digits[ind]-'0';
        for(auto x:mp[d]){
            solve(digits,ind+1,temp+x,mp);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return {};
        unordered_map<int,vector<char>> mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]={'g','h','i'};
        mp[5]={'j','k','l'};
        mp[6]={'m','n','o'};
        mp[7]={'p','q','r','s'};
        mp[8]={'t','u','v'};
        mp[9]={'w','x','y','z'};
        solve(digits,0,"",mp);
        return ans;
    }
};