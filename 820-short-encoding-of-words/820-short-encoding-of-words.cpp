class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> s(words.begin(),words.end());
        for(auto c:words){
            for(int i=1;i<c.length();i++){
                s.erase(c.substr(i));
            }
        }
        int res=0;
        for(auto c:s){
            res+=c.size()+1;
        }
        return res;
    }
}; 