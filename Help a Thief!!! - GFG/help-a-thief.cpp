// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        vector<pair<int,int>> mp(N);
        for(int i=0;i<N;i++){
            mp[i]={B[i],A[i]};
        }
        //int n=sizeof(B)/sizeof(B[0]);
        sort(mp.rbegin(),mp.rend());
        //reverse(B.begin(),B.end());
        int i=0,ans=0;
        while(T>0 && i<N){
            int x=min(T,mp[i].second);
            ans+=x*mp[i].first;
            T-=x;
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends