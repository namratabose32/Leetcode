class Solution {
public:
    bool isSafe(vector<string> board,int row,int col,int n){
        int x=row,y=col;
        // diagonal up
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')
                return 0;
            row--;
            col--;
        }
        // left
        col=y;
        row=x;
        while(col>=0){
            if(board[row][col]=='Q')
                return 0;
            col--;
        }
        //diognal down
        row=x;
        col=y;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return 0;
            row++;
            col--;
        }
        return 1;
    }
    void solve(vector<vector<string>> & ans,vector<string> board,int col,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                solve(ans,board,col+1,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<vector<string>> ans;
        solve(ans,board,0,n);
        return ans;
    }
};