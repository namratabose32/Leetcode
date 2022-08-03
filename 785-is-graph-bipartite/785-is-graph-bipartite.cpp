class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &colour,int node){
        if(colour[node]==-1)
            colour[node]=1;
        for(auto it:graph[node]){
            if(colour[it]==-1){
                colour[it]=1-colour[node];
                if(!dfs(graph,colour,it))
                    return false;
            }else if(colour[it]==colour[node])
                return false;
        }return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                if(!dfs(graph,colour,i))
                    return 0;
            }
        }return 1;
    }
};