class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size(),ans=0;
        if(target<nums[0])
            return 0;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target){
                ans=mid;
                i++;
            }else{
                j--;
            }
        }return ans+1;
    }
};