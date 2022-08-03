class Solution {
public:
    bool bfs(vector<vector<int>> graph,vector<int> colour,int node){
        queue<int> q;
        q.push(node);
        colour[node]=1;
        while(!q.empty()){
            node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(colour[it]==-1){
                    colour[it]=1-colour[node];
                    q.push(it);
                }else if(colour[it]==colour[node])
                    return 0;
            }
        }return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                if(!bfs(graph,colour,i))
                    return 0;
            }
        }return 1;
    }
};