class Solution {
public:
    vector<vector<int>> ans;
    void solve(int k,int n,int inx,vector<int> &arr){
        if(n==0 && k==0){
            ans.push_back(arr);
            return;
        }
        if(n<0 or k<0)
            return;
        for(int i=inx;i<=9;i++){
            arr.push_back(i);
            solve(k-1,n-i,i+1,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        solve(k,n,1,arr);
        return ans;
    }
};