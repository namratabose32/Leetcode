class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> vis(n,0);
        stack <int> s;
        s.push(0);
        int c=0;
        while(!s.empty()){
            int tp=s.top();
            s.pop();
            if(vis[tp]==0){
                vis[tp]=1;
                for(auto x:rooms[tp]){
                    s.push(x);
                }
                c++;
            }
        }
        if(c!=n){
            return 0;
        }else{
            return 1;
        }
    }
};