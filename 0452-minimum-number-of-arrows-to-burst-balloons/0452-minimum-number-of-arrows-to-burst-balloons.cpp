class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        set<vector<int>> arr;
        int mid=points[0][1],a=points[0][0],b=points[0][1],n=points.size(),flag=0;
        for(int i=1;i<n;i++){
            flag=0;
            if(mid>=points[i][0]){
                flag=1;
                mid=min(mid,points[i][1]);
                a=min(a,points[i][0]);
                b=max(b,points[i][1]);
            }else{
                flag=0;
                arr.insert({a,b});
                //if(i+1<n){
                    a=points[i][0];
                    b=points[i][1];
                mid=points[i][1];
                //}
            }
        }
        arr.insert({a,b});
        return arr.size();
        
    }
};