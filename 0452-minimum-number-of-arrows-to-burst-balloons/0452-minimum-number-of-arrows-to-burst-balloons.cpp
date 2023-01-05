class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        //set<vector<int>> arr;
        int mid=points[0][1],a=points[0][0],b=points[0][1],n=points.size(),ans=0;
        for(int i=1;i<n;i++){
            if(mid>=points[i][0]){
                mid=min(mid,points[i][1]);
                //a=min(a,points[i][0]);
                //b=max(b,points[i][1]);
            }else{
                //arr.insert({a,b});
                //a=points[i][0];
                //b=points[i][1];
                ans++;
                mid=points[i][1];
            }
        }
        ans++;
        //arr.insert({a,b});
        //return arr.size();
        return ans;
        
    }
};