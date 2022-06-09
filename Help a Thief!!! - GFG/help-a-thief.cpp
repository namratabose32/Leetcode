// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    int maxCoins(int a[], int b[], int t, int n) {
    vector<pair<int,int>> b_a(n) ;
    for(int i=0 ; i<n ; i++)
        b_a[i] = {b[i],a[i]} ;
    
    sort(b_a.rbegin(), b_a.rend()) ;
    
    int ans = 0 , cur = 0 ;
    while(t && cur < n){
        while(t && b_a[cur].second)
            ans += b_a[cur].first , t--, b_a[cur].second-- ;
        cur++ ;
    }
    return ans ;
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