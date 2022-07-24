class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),j=matrix[0].size()-1,i=0;
        while(i<m && j>=0){
            if(matrix[i][j]==target){
                return 1;
            }
            if(matrix[i][j]<target)
                i++;
            else
                j--;
        }return 0;
    }
};