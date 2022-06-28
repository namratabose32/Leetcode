class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        for(auto c:s)
            mp[c]++;
        vector<int> arr(s.length());
        set<int> st;
        int ans=0;
        for(auto x:mp){
            if(st.find(x.second)==st.end()){
                st.insert(x.second);
            }else{
                for(int i=x.second-1;i>=0;i--){
                    ans++;
                    if(st.find(i)==st.end()){
                        st.insert(i);
                        break;
                    }
                }
            }
        }return ans;
    }
};