class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        vector<int> ans(2);
        for(int i=1;i<=nums.size();i++){
            if(s.find(nums[i-1])!=s.end())
                ans[0]=nums[i-1];
            else
                s.insert(nums[i-1]);
        }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                ans[1]=i;
                break;
            }
        }return ans;
    }
};