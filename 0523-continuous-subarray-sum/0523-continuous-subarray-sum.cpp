class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),s=0,pre=0;
        unordered_set<int> h;
        for(int i=0;i<n;i++){
            s+=nums[i];
            int mod=s%k;
            if(h.find(mod)!=h.end())
                return true;
            h.insert(pre);
            pre=mod;
        }return false;
    }
};