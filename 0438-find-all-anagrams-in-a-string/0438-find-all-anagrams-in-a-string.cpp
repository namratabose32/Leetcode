class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        map<char,int> pt,st;
        for(auto c:p)
            pt[c]++;
        int i=0,j=0;
        while(j<s.size()){
            if(j<p.size()-1){
                st[s[j++]]++;
                continue;
            }st[s[j++]]++;
            int temp=0;
            for(auto x:pt){
                if(x.second!=st[x.first]){
                    temp=1;
                    break;
                }
            }
            if(temp==0)
                ans.push_back(i);
            st[s[i++]]--;
            
        }
        return ans;
    }
};