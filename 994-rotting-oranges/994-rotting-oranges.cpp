class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt=0,cntFresh=0,n=grid.size(),m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        int vis[n][m];
        int delRow[]={-1,0,1,0};
        int delCol[]={0,-1,0,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }else
                    vis[i][j]=0;
                if(grid[i][j]==1)
                    cntFresh++;
            }
            
        }
        int ans=0;
        while(!q.empty()){
            int row1 = q.front().first.first , col1=q.front().first.second, t=q.front().second;
            ans=max(ans,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row1+delRow[i];
                int nc=col1+delCol[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0){
                    vis[nr][nc]=2;
                    q.push({{nr,nc},t+1});
                    cnt++;
                }
            }
        }
        if(cnt!=cntFresh)
            return -1;
        return ans;
    }
};