class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size(),ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            ans+=(nums[n-i-1]-nums[i]);
        }return ans;
    }
};