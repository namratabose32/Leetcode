class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int i=0,j=nums.size();
        while(i<j){
            int mid=(i+j)/2;
            if(target==nums[mid]){
                int a=mid,b=mid;
                while(a>=0 && nums[a]==target){
                    ans[0]=a;
                    a--;
                }
                while(b<nums.size() && nums[b]==target){
                    ans[1]=b;
                    b++;
                }
                break;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return ans;
    }
};