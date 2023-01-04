class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size(),mx=1,lastIndex=0;
        sort(nums.begin(),nums.end());
        vector<int> ans,hash(n),dp(n,1);
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    hash[i]=j;
                }
            }
            if(dp[i]>mx){
                mx=dp[i];
                lastIndex=i;
            }
        }
        ans.push_back(nums[lastIndex]);
        while(hash[lastIndex]!=lastIndex){
            lastIndex=hash[lastIndex];
            ans.push_back(nums[lastIndex]);
        }
        return ans;
    }
};