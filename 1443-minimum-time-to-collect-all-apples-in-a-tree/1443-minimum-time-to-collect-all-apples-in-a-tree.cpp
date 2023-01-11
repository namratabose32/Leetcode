class Solution {
public:
    unordered_map<int,vector<int>> graph;
    int dfs(int node,vector<int> &vis,vector<bool> hasApple){
        if(vis[node]) //if node already visited
            return 0;
        vis[node]=1; // mark node as visited if not
        int cost=0;
        for(auto x:graph[node]){//traverse all child node of the node using dfs
            cost+=dfs(x,vis,hasApple);
        }
        if(hasApple[node]==false && cost==0) // no apple in the node
            return 0;
        if(node==0) // if root node then cost is 0
            return cost;
        // all nodes other than root node is 2 .... root->childNode->root
        return cost+2; 
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> visited(n,0);
        //creating a graph
        for(auto x:edges){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        // calculating cost
        return dfs(0,visited,hasApple);
    }
};