class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1,resPos=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[resPos]==nums[i])
                c++;
            else
                c--;
            if(c==0){
                resPos=i;
                c=1;
            }
        }
        return nums[resPos];
    }
};