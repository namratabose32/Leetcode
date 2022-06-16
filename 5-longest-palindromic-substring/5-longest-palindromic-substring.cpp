class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
            return "";
        if(s.length()==1)
            return s;
        int start=0,mx=1;
        for(int i=0;i<s.length();){
            if(s.length()-i<mx/2)
                break;
            int j=i,k=i;
            while(k<s.length() && s[k]==s[k+1])
                k++;
            i=k+1;
            while(k<s.length() && j>0 && s[k+1]==s[j-1]){
                k++;
                j--;
            }
            int newlen=k-j+1;
            if(newlen>mx){
                start=j;
                mx=newlen;
            }
        }
        return s.substr(start,mx);
    }
};