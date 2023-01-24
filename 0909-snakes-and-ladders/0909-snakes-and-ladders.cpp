class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<pair<int,int>> dp(n*n+1);
        int ind=1;
        vector<int> col(n);
        for(int i=0;i<n;i++)
            col[i]=i;
        // dp ko ready karo mast board jaise 1st row left se right and next right se left and phir left se right and so on....
        for(int row=n-1;row>=0;row--){
            for(int colmn:col)
                dp[ind++]={row,colmn};
            reverse(col.begin(),col.end());
        }
        // ab haar box ka distance start se
        vector<int> dist(n*n+1,-1);
        dist[1] = 0;
        queue<int> q;
        q.push(1);
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            for (int next = curr + 1; next <= min(curr+6, n*n); next++) {
                auto [row, column] = dp[next];
                int destination = board[row][column] != -1 ? board[row][column] : next;
                if (dist[destination] == -1) {
                    dist[destination] = dist[curr] + 1;
                    q.push(destination);
                }
            }
        }
        return dist[n*n];
    }
};