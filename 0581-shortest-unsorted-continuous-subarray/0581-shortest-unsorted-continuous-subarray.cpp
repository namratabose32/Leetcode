class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        for(auto x:nums){
            temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        int i=0,ans=0;
        for(i=0;i<n;i++){
            if(temp[i]==nums[i])
                ans++;
            else
                break;
        }
        for(int j=n-1;j>i;j--){
            if(temp[j]==nums[j])
                ans++;
            else
                break;
        }
        return n-ans;
    }
};