class Solution {
public:
    vector<int> fun(map<int,vector<int>> &graph,string &label,int i,vector<int> &result){
        vector<int> ans(26,0);
        ans[label[i]-'a']=1;
        result[i]=1;
        for(auto x:graph[i]){
            if(!result[x]){
                vector<int> temp=fun(graph,label,x,result);
                for(int k=0;k<26;k++)
                    ans[k]+=temp[k];
            }
        }
        
        result[i]=ans[label[i]-'a'];
        return ans;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        map<int,vector<int>>graph;
        map<int,char> label;
        for(auto x:edges){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<int> result(n,0);
        fun(graph,labels,0,result);
        return result;
    }
};