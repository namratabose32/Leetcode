class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0,flag=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j-1][i]>strs[j][i]){
                    ans++;
                    break;
                }
            }
        }return ans;
    }
};