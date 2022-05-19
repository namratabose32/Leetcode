// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2) {
        // code here
        int c=0;
        unordered_map<char,int> mp;
        for(int i=0;i<26;i++){
            mp[S1[i]]=i;
        }
        int s=0;
        for(int i=0;i<S2.length();i++){
            int x=mp[S2[i]];
            c=c+abs(x-s);
            s=x;
        }
        return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends