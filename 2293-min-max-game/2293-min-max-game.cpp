class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        while(n>1){
            vector<int> ans(n/2);
            for(int i=0;i<n/2;i++){
                if(i%2==0)
                    ans[i]=min(nums[2*i],nums[2*i+1]);
                else
                    ans[i]=max(nums[i*2],nums[2*i+1]);
            }
            nums=ans;
            n=nums.size();
        }
        return nums[0];
    }
};