class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],mx=prices[0],ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mn){
                mn=prices[i];
                mx=prices[i];
            }
            if(prices[i]>mx){
                mx=prices[i];
                ans=max(ans,mx-mn);
            }
        }return ans;
    }
};