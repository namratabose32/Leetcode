// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int lengthBit(int n){
      int ans=0,i=0;
      while(n>0){
          ans+=pow(2,i);
          i++;
          n/=2;
      }return ans;
  }
    vector<int> changeBits(int N) {
        // code here
        vector<int> ans(2);
        ans[1]=lengthBit(N);
        ans[0]=ans[1]-N;
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends