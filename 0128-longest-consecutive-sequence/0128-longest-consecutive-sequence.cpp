class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int> s;
        for(auto c:nums)
            s.insert(c);
        int ans=0;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int c=x,cnt=1;
                while(s.find(c+1)!=s.end()){
                    cnt++;
                    c++;
                }
                ans=max(ans,cnt);
            }
        }return ans;
    }
};