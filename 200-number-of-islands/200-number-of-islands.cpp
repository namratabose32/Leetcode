class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>grid){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n=grid.size(),m=grid[0].size();
        while(!q.empty()){
            int row1=q.front().first;
            int col1=q.front().second;
            q.pop();
            //down
            if(row1-1>=0 && row1-1<n && col1>=0 && col1<m && grid[row1-1][col1]=='1' && !vis[row1-1][col1]){
                        vis[row1-1][col1]=1;
                        q.push({row1-1,col1});
            }
            //up
            if(row1+1>=0 && row1+1<n && col1>=0 && col1<m && grid[row1+1][col1]=='1' && !vis[row1+1][col1]){
                        vis[row1+1][col1]=1;
                        q.push({row1+1,col1});
            }
            //left
            if(row1>=0 && row1<n && col1-1>=0 && col1-1<m && grid[row1][col1-1]=='1' && !vis[row1][col1-1]){
                        vis[row1][col1-1]=1;
                        q.push({row1,col1-1});
            }
            //right
            if(row1>=0 && row1<n && col1+1>=0 && col1+1<m && grid[row1][col1+1]=='1' && !vis[row1][col1+1]){
                        vis[row1][col1+1]=1;
                        q.push({row1,col1+1});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    c++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return c;
    }
};