class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int curr=1,ans=1,prev=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prev+1==nums[i]){
                curr++;
                prev=nums[i];
                ans=max(curr,ans);
            }else if(prev==nums[i])
                continue;
            else{
                curr=1;
                prev=nums[i];
            }
        }return ans;
    }
};