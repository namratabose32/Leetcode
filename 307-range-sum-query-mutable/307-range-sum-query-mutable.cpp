class NumArray {
public:
    int s=0;
    vector<int> ans;
    NumArray(vector<int>& nums) {
        for(auto c:nums){
            s+=c;
            ans.push_back(c);
        }
    }
    
    void update(int index, int val) {
        s-=ans[index];
        ans[index]=val;
        s+=val;
    }
    
    int sumRange(int left, int right) {
        int sum=s;
        for(int i=0;i<left;i++)
            sum-=ans[i];
        for(int i=right+1;i<ans.size();i++)
            sum-=ans[i];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */