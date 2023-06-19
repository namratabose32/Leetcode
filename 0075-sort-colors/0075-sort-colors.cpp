class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                swap(nums[i],nums[zero++]);
            }else if(nums[i]==2){
                swap(nums[i],nums[--n]);
                i--;
            }
        }
    }
};