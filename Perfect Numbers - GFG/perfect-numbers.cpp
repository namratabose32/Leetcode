//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N == 1) return 0;
        long long s = 0;
        for(long long int i=2; i*i<=N; i++){
            if(N % i == 0){
                s += i;
                if(i != N/i)
                s += N/i;
            }
        }
        s++;
        
        return s == N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends