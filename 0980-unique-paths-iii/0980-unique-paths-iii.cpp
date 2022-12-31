class Solution {
public:
    int res=0,empty=0;
    void func(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]<0)
            return;
        if(grid[i][j]==2){
            if(empty==0)
                res++;
            return;
        }
        grid[i][j]=-2;
        empty--;
        func(grid,i+1,j);
        func(grid,i-1,j);
        func(grid,i,j-1);
        func(grid,i,j+1);
        grid[i][j]=0;
        empty++;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int sx=0,sy=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)
                    empty++;
                if(grid[i][j]==1){
                    empty++;
                    sx=i;
                    sy=j;
                }
            }
        }
        func(grid,sx,sy);
        return res;
    }
};