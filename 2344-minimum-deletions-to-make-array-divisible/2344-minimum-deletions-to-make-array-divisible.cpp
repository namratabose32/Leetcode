class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int ans=0;
        map<int,int> mp;
        for(auto x:nums)
            mp[x]++;
        for(auto x:mp){
            int flag=0;
            for(auto c:numsDivide){
                if(c%x.first!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                ans+=x.second;
            }else{
                return ans;
            }
        }return -1;
    }
};