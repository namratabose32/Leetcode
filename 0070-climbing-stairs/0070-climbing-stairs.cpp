class Solution {
public:
    int climbStairs(int n) {
        int x=1,y=1;
        for(int i=2;i<=n;i++){
            int c=x+y;
            y=x;
            x=c;
        }return x;
    }
};