class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=0;i<n;i++){
            if(i+1<n && end>=intervals[i+1][0]){
                end=max(end,intervals[i+1][1]);
            }else{
                ans.push_back({start,end});
                if(i!=n-1){
                    start=intervals[i+1][0];
                    end=intervals[i+1][1];
                }
            }
        }
        return ans;
    }
};