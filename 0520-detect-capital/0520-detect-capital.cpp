class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(auto x: word){
            if(x>='A' && x<='Z')
                c++;
        }
        if((c==1 && word[0]>='A' && word[0]<='Z')|| c==0 || c==word.size())
            return true;
        return false;
    }
};