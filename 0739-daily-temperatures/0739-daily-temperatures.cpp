class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>> s;
        int n=temp.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top().first<=temp[i])
                s.pop();
            ans[i]=s.empty()?0:s.top().second-i;
            s.push({temp[i],i});
        }return ans;
    }
};