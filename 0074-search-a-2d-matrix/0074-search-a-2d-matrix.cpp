class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0,n=matrix[0].size(),m=matrix.size();
        while(i<m && j<n){
            if(matrix[i][j]==target)
                return 1;
            if(i+1!=m && matrix[i+1][j]<=target){
                i++;
            }else if(j+1!=n && matrix[i][j+1]<=target){
                j++;
            }else
                return false;
        }
        return 0;
    }
};