class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        string str="";
        auto it=products.begin();
        for(auto c:searchWord){
            str+=c;
            vector<string> sug;
            it=lower_bound(it,products.end(),str);
            for(int i=0;i<3 && it+i!=products.end();i++){
                string s=*(it+i);
                if(s.find(str))
                    break;
                sug.push_back(s);
            }
            ans.push_back(sug);
        }return ans;
    }
};