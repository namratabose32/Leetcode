class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),ind=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind!=-1){
            for(int i=n-1;i>=ind;i--){
                if(nums[ind]<nums[i]){
                    swap(nums[ind],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+ind+1, nums.end());
        }else{ // desecending order me hai sara isleye ulta krdo bs
            reverse(nums.begin(),nums.end());
        }
    }
};