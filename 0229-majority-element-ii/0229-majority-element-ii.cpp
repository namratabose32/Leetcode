class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x=INT_MAX,y=INT_MAX,cx=0,cy=0,n=nums.size();
        for(int num:nums){
            if(num==x)
                cx++;
            else if(num==y)
                cy++;
            else if(cx==0){
                x=num;
                cx=1;
            }else if(cy==0){
                y=num;
                cy=1;
            }else{
                cx--;
                cy--;
            }
        }
        vector<int> ans;
        cx=cy=0;
        for(int num:nums){
            if(x==num)
                cx++;
            else if(y==num)
                cy++;
        }
        if(cx>n/3)
            ans.push_back(x);
        if(cy>n/3)
            ans.push_back(y);
        return ans;
    }
};