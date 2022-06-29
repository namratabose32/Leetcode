class Solution {
public:
    static bool comp(vector<int>p1,vector<int> p2){
        return (p1[0]>p2[0])||(p1[0]==p2[0] && p1[1]<p2[1]);
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        sort(people.begin(),people.end(),comp);
        for(auto p:people){
            res.insert(res.begin()+p[1],p);
        }return res;
    }
};