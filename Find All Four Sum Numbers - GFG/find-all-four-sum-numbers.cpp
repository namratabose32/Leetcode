//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
           vector<vector<int>> ans;
       int len = nums.size();
       sort(nums.begin(),nums.end());
       set<vector<int>> st;
       if(len<4) return ans;
       for(int i = 0;i<len-3;i++){
           for(int j = i + 1;j<len-2;j++){
               int left = j+1;
               int right = len-1;
               while(left<right){
                   long long sum = nums[i]+nums[j]+nums[left] + nums[right];
                   if(sum==target){
                      vector<int> list = {nums[i],nums[j],nums[left],nums[right]};
                       if(st.find(list)==st.end()){
                           ans.push_back(list);
                           st.insert(list);
                       }
                       left++;
                       right--;
                       }else if(sum<target){
                           left++;
                       }else{
                           right--;
                       }
                   }
               }
           }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends