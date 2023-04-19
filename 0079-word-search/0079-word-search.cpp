class Solution {
public:
    bool solve(vector<vector<char>> &board,string word,int ind,int row,int col,vector<vector<bool>> &visited){
        if(ind==word.length())
            return 1;
        if(row<0 || row>=board.size() || col<0 || col>=board[0].size() || visited[row][col]==true ||  board[row][col]!=word[ind])
            return false;
        visited[row][col]=true;
        if(solve(board,word,ind+1,row+1,col,visited) || solve(board,word,ind+1,row-1,col,visited) || solve(board,word,ind+1,row,col+1,visited) || solve(board,word,ind+1,row,col-1,visited))
            return 1;
        visited[row][col]=false;
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(word[0]==board[i][j] && solve(board,word,0,i,j,visited))
                    return 1;
            }
        }return 0;
    }
};