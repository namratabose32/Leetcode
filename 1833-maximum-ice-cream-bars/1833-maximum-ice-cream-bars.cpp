class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        long long sum=0;
        for(auto c:costs){
            sum+=c;
            if(sum>coins)
                break;
            else
                ans++;
        }return ans;
    }
};