class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }
        vector<int> indegree(n);
        for(int i=0;i<n;i++){
            for(auto x:adj[i])
                indegree[x]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            topo.push_back(top);
            for(auto x:adj[top]){
                indegree[x]--;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        if(topo.size()!=n)
            return vector<int>{};
        return topo;
    }
};