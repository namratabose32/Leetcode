class Solution {
public:
    void bfs(int row,int col,vector<vector<int>> &image,int colour,int curr){
        image[row][col]=colour;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row1=q.front().first,col1=q.front().second;
            q.pop();
            if(row1-1>=0 && image[row1-1][col1]==curr){
                image[row1-1][col1]=colour;
                q.push({row1-1,col1});
            }if(col1-1>=0 && image[row1][col1-1]==curr){
                image[row1][col1-1]=colour;
                q.push({row1,col1-1});
            }if(row1+1<image.size() && image[row1+1][col1]==curr){
                image[row1+1][col1]=colour;
                q.push({row1+1,col1});
            }if(col1+1>=0 && image[row1][col1+1]==curr ){
                image[row1][col1+1]=colour;
                q.push({row1,col1+1});
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int curr=image[sr][sc];
        if(curr==color)
            return image;
        //vector<vector<int>> vis(image.size(),vector<int>(image[0].size(),0));
        bfs(sr,sc,image,color,curr);
        return image;
    }
};