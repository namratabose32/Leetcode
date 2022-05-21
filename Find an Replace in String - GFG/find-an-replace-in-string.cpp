// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string str ,int Q, int index[], string sources[], string targets[]) {
        string ans = "";
        int run = 0;
        
        for(int q = 0; q < Q; q++) {
            int idx = index[q];
            string s = sources[q], t = targets[q];
            
            string src = str.substr(idx, min(s.length(), str.length()-idx));
            for(; run < idx; run++) {
                ans += str[run];
            }
            if(src == s) {
                ans += t;
                run = idx + s.length(); 
            } else {
                run = idx;
            }
        }
        while(run < str.length()) {
            ans += str[run];
            run++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends