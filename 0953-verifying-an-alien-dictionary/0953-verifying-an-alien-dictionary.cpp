class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
        }
        int prev=0;
        for(auto &x:words){
            int s=0;
            for(int i=0;i<x.length();i++){
                x[i]=mp[x[i]];
            }
        }
        return is_sorted(words.begin(),words.end());
    }
};