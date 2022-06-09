class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // map<int,int> s;
        // for(int i=0;i<nums.size();i++){
        //     if(s.find(target-nums[i])!=s.end())
        //         return vector<int>{s[target-nums[i]]+1,i+1};
        //     s[nums[i]]=i;
        // }return ans;
        
        int i=0,j=nums.size()-1;
        vector<int> ans(2,-1);
        while(i<j){
            if(nums[i]+nums[j]==target){
                ans[0]=i+1;
                ans[1]=j+1;
                return ans;
            }else if(nums[i]+nums[j]>target){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};