class Solution {
public:
    bool isPalindrome(int x) {
        long long int n=x,ans=0;
        if(x<0)
            return false;
        while(n>0){
            ans=ans*10 + n%10;
            n/=10;
        }
        if(ans==x)
            return true;
        else
            return false;
    }
};