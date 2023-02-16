class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> hash;
	hash[nums[0]]=0;
	vector<int> ans;
	for(int i=1;i<nums.size();i++){
		if(hash.find(target-nums[i])!=hash.end()){
			ans.push_back(hash[target-nums[i]]);
			ans.push_back(i);
		}
		hash[nums[i]]=i;
	}
	return ans;
}
};