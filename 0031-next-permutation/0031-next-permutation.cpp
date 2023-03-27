class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(),nums.end());
        
        vector<int> arr;
        int mx=nums[nums.size()-1],i=nums.size()-2;
        arr.push_back(mx);
        while(i>0 && nums[i]==mx){
            arr.push_back(nums[i--]);
        }
        if(nums.size()<=1 || i<0)
            return;
        for(;i>=0;i--){
            if(nums[i]<mx){
                break;
            }else{
                mx=nums[i];
                arr.push_back(nums[i]);
            }
        }
        if(i==-1)
            sort(nums.begin(),nums.end());
        else{
            sort(arr.begin(),arr.end());
            int x=0;
            for(int j=0;j<arr.size();j++){
                if(nums[i]<arr[j]){
                    x=j;
                    int t=nums[i];
                    nums[i]=arr[j];
                    arr[j]=t;
                    i++;
                    break;
                }
            }
            for(int j=0;j<arr.size();j++){
                nums[i++]=arr[j];
            }
        }
    }
};