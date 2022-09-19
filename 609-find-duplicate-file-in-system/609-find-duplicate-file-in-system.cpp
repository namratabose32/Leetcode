class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string,vector<string>>mp;
        for(auto x:paths){
            string p;
            int i=0;
            while(x[i]!=' '){
                p+=x[i++];
            }i++;
            while(i<x.length()){
                string s;
                while(x[i]==' ')
                    i++;
                while(x[i]!='('){
                    s+=x[i++];
                }
                string txt;
                while(x[i]!=')'){
                    txt+=x[i++];
                }
                mp[txt].push_back(p+'/'+s);
                i++;
            }
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            if(x.second.size()==1)
                continue;
            ans.push_back(x.second);
        }return ans;
    }
};