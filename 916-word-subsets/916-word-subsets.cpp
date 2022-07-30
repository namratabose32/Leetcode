class Solution {
public:
    vector<int> count(string s){
        vector<int> cnt(26);
        for(auto c:s){
            cnt[c-'a']++;
        }return cnt;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> cnt(26),temp(26);
        for(auto x:words2){
            temp=count(x);
            for(int i=0;i<26;i++)
                cnt[i]=max(cnt[i],temp[i]);
        }vector<string> ans;
        for(auto x:words1){
            temp=count(x);
            int t=0;
            for(int i=0;i<26;i++){
                if(temp[i]<cnt[i]){
                    t=1;
                    break;
                }
            }
            if(t==0)
                ans.push_back(x);
        }
        return ans;
    }
};