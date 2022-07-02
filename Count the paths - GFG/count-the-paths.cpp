// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int recur_path(vector<int>adj[],int s,int d)
    {
        int ans=0;
        if(s==d)
        {
            return 1;
        }
        for(auto x:adj[s])
        {
            ans+=recur_path(adj,x,d);
        }
        return ans;
    }

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    int ans=0;
	    vector<int>adj[n];
	    for(auto x:edges)
	    {
	        adj[x[0]].push_back(x[1]);
	    }
	    return recur_path(adj,s,d);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends