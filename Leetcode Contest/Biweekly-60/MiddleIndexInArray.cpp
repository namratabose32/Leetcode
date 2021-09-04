class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> ls(n);
        vector<int> rs(n);
        ls[0]=nums[0];
        for(int i=1;i<n;i++)
            ls[i]=ls[i-1]+nums[i];
        rs[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            rs[i]=rs[i+1]+nums[i];
        for(int i=0;i<n;i++){
            if(ls[i]==rs[i])
                return i;
        }if(rs[1]==0)
            return 0;
        if(ls[n-2]==0)
            return n-1;
        return -1;
    }
};
