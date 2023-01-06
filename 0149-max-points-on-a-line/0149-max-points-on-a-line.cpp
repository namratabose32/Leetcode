class Solution {
public:
    //Method - 1 - using map which take time of O(logn) so TC : O(n^2)+ O(logn)
/*
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
*/
    //Method - 2 - using unordered_map which take time of O(nlogn) so TC : O(n^2)+ O(nlogn)
    
    int gcd(int a,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        for(int i=0;i<n;i++){
            unordered_map<string,int> cnt;
            int duplicate=1;
            for(int j=i+1;j<n;j++){
                if(points[i][0]==points[j][0] && points[i][1]==points[j][1])
                    duplicate++;
                else{
                    int dy=points[i][0]-points[j][0];
                    int dx=points[i][1]-points[j][1];
                    int g=gcd(dx,dy);
                    cnt[to_string(dx/g)+","+to_string(dy/g)]++;
                }
            }
            ans=max(ans,duplicate);
            for(auto x:cnt)
                ans=max(ans,x.second+duplicate);
        }return ans;
    }
};