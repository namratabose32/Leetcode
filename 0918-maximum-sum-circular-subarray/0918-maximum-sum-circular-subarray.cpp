class Solution {
public:
    int Sum(vector<int> nums){
        int s=nums[0],m=nums[0];
        for(int i=1;i<nums.size();i++){
            s=max(s+nums[i],nums[i]);
            m=max(s,m);
        }return max(s,m);
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int s=Sum(nums),t=0;
        if(s<0)
            return s;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
            nums[i]=-1*nums[i];
        }
        return max(s,t+Sum(nums));
    }
};