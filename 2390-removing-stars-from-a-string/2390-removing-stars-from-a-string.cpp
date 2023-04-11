class Solution {
public:
    string removeStars(string s) {
        string st;
        for(auto x:s){
            if(x=='*')
                st.pop_back();
            else
                st.push_back(x);
        }
        // string ans;
        // while(!st.empty()){
        //     ans.push_back(st.top());
        //     st.pop();
        // }reverse(ans.begin(),ans.end());
        // return ans;
        return st;
    }
};