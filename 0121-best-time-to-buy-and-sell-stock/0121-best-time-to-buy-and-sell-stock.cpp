class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0,mn=prices[0],n=prices.size();
        for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
            mx=max(mx,prices[i]-mn);
            // if(prices[i]<mn){
            //     mn=prices[i];
            //     mx=prices[i];
            // }
            // if(mx<prices[i]){
            //     mx=prices[i];
            //     ans=max(ans,mx-mn);
            // }
        }return mx;
    }
};