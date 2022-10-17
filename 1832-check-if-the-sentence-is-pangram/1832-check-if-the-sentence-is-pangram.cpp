class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)
            return 0;
      vector<int> s(26,0);
        for(auto x:sentence){
            s[x-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(s[i]==0)
                return 0;
        }return 1;
    }
};