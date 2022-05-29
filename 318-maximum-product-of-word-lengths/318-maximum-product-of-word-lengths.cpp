class Solution {
public:
    int maxProduct(vector<string>& words) {
        int mx=0;
        for(int i=0;i<words.size()-1;i++){
            set<char> mp;
            for(auto c:words[i]){
                mp.insert(c);
            }
            for(int j=i+1;j<words.size();j++){
                int t=0;
                for(auto x:words[j]){
                    if(mp.find(x)!=mp.end()){
                        t=1;
                        break;
                    }
                }
                if(t==0){
                    int z=(words[i].length()*words[j].length());
                    if(mx<z)
                        mx=z;
                }
            }
        }return mx;
    }
};