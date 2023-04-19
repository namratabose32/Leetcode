class Solution {
public:
    bool solve(vector<vector<char>> &board,string word,int ind,int row,int col){
        if(ind==word.length())
            return 1;
        if(row<0 || col<0 || row==board.size() || col==board[0].size() || board[row][col]!=word[ind] || board[row][col]=='.' )
            return false;
        int temp[4]={-1,1,0,0};
        board[row][col]='.';
        for(int i=0;i<4;i++){
            if(solve(board,word,ind+1,row+temp[i],col+temp[3-i]))
                return 1;
        }
        board[row][col]=word[ind];
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(word[0]==board[i][j] && solve(board,word,0,i,j))
                    return 1;
            }
        }return 0;
    }
};