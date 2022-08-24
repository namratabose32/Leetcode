class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1=s.substr(0,s.length()/2);
        string s2=s.substr(s.length()/2,s.length());
        int v1=0,c1=0,v2=0,c2=0;
        for(auto c:s1){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                v1++;
            else
                c1++;
        }
        for(auto c:s2){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                v2++;
            else
                c2++;
        }
        if(v2==v1 && c1==c2)
            return 1;
        
        return 0;
    }
};