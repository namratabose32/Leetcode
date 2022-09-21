class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),evensum=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                evensum+=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[queries[i][1]]%2==0){
                evensum-=nums[queries[i][1]];
            }
            nums[queries[i][1]]+=queries[i][0];
            if(nums[queries[i][1]]%2==0){
                evensum+=nums[queries[i][1]];
            }
            ans.push_back(evensum);
        }
        return ans;
    }
};