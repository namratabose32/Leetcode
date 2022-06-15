class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int c=0;
        for(auto x:mp){
            for(int i=0;i<x.second.size();i++){
                for(int j=i+1;j<x.second.size();j++){
                    if((x.second[i]*x.second[j])%k==0)
                        c++;
                }
            }
        }
        return c;
    }
};