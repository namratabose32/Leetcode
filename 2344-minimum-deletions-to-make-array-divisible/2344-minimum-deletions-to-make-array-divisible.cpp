class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int ans=0;
        map<int,int> mp;
        for(auto x:nums)
            mp[x]++;
        // find greatest common divisor of numsDivide so as to easily find 1st element from nums which can divide all the elements of numsDivide
        int g=numsDivide[0];
        for(auto x:numsDivide){
            g=gcd(g,x);
        }
        // since map sorts all the elements so we can easily find the sortest element and time complexity can decrease a little bit if there are repitation of elements which are non-divisible
        for(auto x:mp){
            if(g%x.first==0){
                return ans;
            }
            else{
                ans+=x.second;
            }
        }return -1;
    }
};