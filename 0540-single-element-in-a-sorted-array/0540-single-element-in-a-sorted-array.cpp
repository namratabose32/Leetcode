class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size()-1;i+=2){
            if(nums[i-1]!=nums[i])
                return nums[i-1];
        }return nums[nums.size()-1];
    }
};