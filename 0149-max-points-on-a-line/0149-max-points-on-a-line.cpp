class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        for(int i=0;i<n;i++){
            map<pair<int,int>,int> cnt;
            int duplicate=1;
            for(int j=i+1;j<n;j++){
                if(points[i][0]==points[j][0] && points[i][1]==points[j][1])
                    duplicate++;
                else{
                    int dy=points[i][0]-points[j][0];
                    int dx=points[i][1]-points[j][1];
                    int g=gcd(dx,dy);
                    cnt[{dx/g,dy/g}]++;
                }
            }
            ans=max(ans,duplicate);
            for(auto x:cnt)
                ans=max(ans,x.second+duplicate);
        }return ans;
    }
};