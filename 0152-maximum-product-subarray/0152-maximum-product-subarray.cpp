class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0],mn=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max({nums[i],nums[i]*mx,nums[i]*mn});
            mn=min({nums[i],nums[i]*mx,nums[i]*mn});
            mx=temp;
            res=max(res,mx);
        }return res;
    }
};