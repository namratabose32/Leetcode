class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow]; // i.e. move one step only
            fast=nums[nums[fast]]; // move 2 steps
        }while(slow!=fast);
        fast=nums[0];
        while(fast!=slow){ 
            //move on step only and see where they are same is the repeating number
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};