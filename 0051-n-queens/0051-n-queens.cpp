class Solution {
public:
    void solve(vector<vector<string>> & ans,vector<string> board,int col,int n,vector<int> leftRow,vector<int> upperDiagonal,vector<int> lowerDiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(lowerDiagonal[row+col]==0 && upperDiagonal[n-1+(col-row)]==0 && leftRow[row]==0){
                board[row][col]='Q';
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+(col-row)]=1;
                leftRow[row]=1;
                solve(ans,board,col+1,n,leftRow,upperDiagonal,lowerDiagonal);
                board[row][col]='.';
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+(col-row)]=0;
                leftRow[row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        vector<vector<string>> ans;
        solve(ans,board,0,n,leftRow,upperDiagonal,lowerDiagonal);
        return ans;
    }
};