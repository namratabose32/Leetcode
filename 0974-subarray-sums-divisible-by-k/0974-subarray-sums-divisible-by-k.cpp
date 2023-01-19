class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> cnt(k,0);
        cnt[0]=1;
        int s=0,res=0;
        for(auto x:nums){
            s=(s+x%k+k)%k;
            res+=cnt[s];
            cnt[s]++;
        }return res;
    }
};