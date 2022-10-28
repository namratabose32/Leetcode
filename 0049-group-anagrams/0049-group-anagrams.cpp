class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> mp;
        string str=strs[0];
        sort(str.begin(),str.end());
        mp[str].push_back(0);
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }vector<vector<string>> ans;
        for(auto x:mp){
            vector<string> res;
            for(auto c:x.second)
                res.push_back(strs[c]);
            ans.push_back(res);
        }return ans;
    }
};