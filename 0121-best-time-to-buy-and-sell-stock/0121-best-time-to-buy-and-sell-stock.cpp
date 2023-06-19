class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],mx=prices[0],ans=0,n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<mn){
                mn=prices[i];
                mx=prices[i];
            }
            if(mx<prices[i]){
                mx=prices[i];
                ans=max(ans,mx-mn);
            }
        }return ans;
    }
};