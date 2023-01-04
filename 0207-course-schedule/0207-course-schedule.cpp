class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto x:prerequisites){
            adj[x[0]].push_back(x[1]);
        }
        vector<int> indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto x: adj[i])
                indegree[x]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        vector<int> topo;
        int cnt=0;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            cnt++;
            for(auto x:adj[top]){
                indegree[x]--;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        if(cnt==numCourses)
            return 1;
        return 0;
    }
};