class Solution {
public:
    // int scheduleCourse(vector<vector<int>>& courses) {
    //     if(courses.size() <= 0) return 0;
    //     sort(courses.begin(), courses.end(), [](const vector<int>& a, vector<int>& b) {
    //         return a[1] < b[1];
    //     });
    //     priority_queue<int> q;
    //     int sum = 0;
    //     for(auto i : courses) {
    //         sum += i[0];
    //         q.push(i[0]);
    //         if(sum > i[1]) {
    //             sum -= q.top();
    //             q.pop();
    //         }
    //     }
    //     return q.size();
    // }
    static bool comp(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses){
        if(courses.size()==0)
            return 0;
        sort(courses.begin(),courses.end(),comp);
        priority_queue<int> q;
        int s=0;
        for(auto x:courses){
            s+=x[0];
            q.push(x[0]);
            if(s>x[1]){
                s-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};