class Solution {
public:
    typedef pair<int,int> t;
    vector<int> getOrder(vector<vector<int>>& tasks) {
        //min heap ordered by 1st element
        //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        priority_queue<t,vector<t>,greater<>> pq; //processing time & index
        long time=0,i=0,n=tasks.size();
        for(int j=0;j<n;j++)
            tasks[j].push_back(j);
        sort(tasks.begin(),tasks.end());
        vector<int> ans;
        while(i<n || pq.size()){
            if(pq.empty()){
                time=max(time,(long)tasks[i][0]);
            }
            while(i<n && time>=tasks[i][0]){
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            int processingTime=pq.top().first;
            int index=pq.top().second;
            time+=processingTime;
            pq.pop();
            ans.push_back(index);
        }return ans;
        
    }
};