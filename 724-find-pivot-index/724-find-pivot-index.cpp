class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum(nums.size());
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            sum[i]=sum[i-1]+nums[i];
        int left=0,right=0;
        for(int i=0;i<nums.size();i++){
            if(i!=0)
                left=sum[i-1];
            else
                left=0;
            if(i!=nums.size()-1)
                right=sum[nums.size()-1]-sum[i];
            else
                right=0;
            
            if(left==right){
                return i;
            }
        }return -1;
    }
};