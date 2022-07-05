class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        int prev=nums[0],c=1,mx=1,n=nums.size();
        
        for(int i=1;i<n;i++){
            if(prev==nums[i])
                continue;
            if(prev+1==nums[i]){
                c++;
                mx=max(mx,c);
                
            }else{
                c=1;
            }
            prev=nums[i];
        }return mx;
    }
};