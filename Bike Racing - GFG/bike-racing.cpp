// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    static long buzzTime(int N, long M, long L, long H[], long A[]){
       // code here
       long c = 0;
       int l = 0;
       int h = (int)1e8;
       long res = 0;
       while(l<=h){
           int mid = (l+h)/2;
           long sum = 0;
           for(int i=0;i<N;i++){
               long s1 = (H[i]+(mid*A[i]));
               if(s1>=L)
               sum+=s1;
           }
           if(sum>=M){
               res = mid;
               h = mid-1;
           }
           else
           l = mid+1;
       }
       return res;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends