class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int c=0,n=s.length();
        unordered_map<string,int> word;
        for(int i=0;i<words.size();i++)
            word[words[i]]++;
        for(auto z: word){
            int i=0,j=0;
            string w=z.first;
            int m=w.length();
            while(i<n && j<m){
                if(s[i]==w[j]){
                    i++;
                    j++;
                }else
                    i++;
            }if(j==m)
                c+=z.second;
        }return c;
    }
};