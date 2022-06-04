// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        vector<int> in(N+1,0);
        for(int i = 0; i <M;i++){
            in[mat[i][0]]++;
        }
        queue<int> helper;
        for(int i = 1; i<=N;i++){
            if(in[i]==0){
                helper.push(i);
            }
        }
        vector<vector<int>> ad(N+1);
        for(int i = 0; i < M;i++){
            ad[mat[i][1]].push_back(mat[i][0]);
        }
        int ans = 0;
        while(helper.size()!=0){
            int k = helper.size();
            for(int i = 0; i < k;i++){
                int node = helper.front();
                helper.pop();
                for(int j = 0; j < ad[node].size();j++){
                    if(in[ad[node][j]]>=1){
                        in[ad[node][j]]--;
                        if(in[ad[node][j]]==0){
                            helper.push(ad[node][j]);
                        }
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends