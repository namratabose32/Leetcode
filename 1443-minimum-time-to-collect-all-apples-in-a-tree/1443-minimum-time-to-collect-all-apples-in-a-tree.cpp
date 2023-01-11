class Solution {
public:
    unordered_map<int,vector<int>> graph;
    int dfs(int node,vector<int> &vis,vector<bool> hasApple){
        if(vis[node])
            return 0;
        vis[node]=1;
        int cost=0;
        for(auto x:graph[node]){
            cost+=dfs(x,vis,hasApple);
        }
        if(hasApple[node]==false && cost==0)
            return 0;
        if(node==0)
            return cost;
        return cost+2;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> visited(n,0);
        for(auto x:edges){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        
        return dfs(0,visited,hasApple);
    }
};