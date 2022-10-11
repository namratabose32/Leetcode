class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int c1=INT_MAX,c2=INT_MAX;
        for(auto c:nums){
            if(c<=c1){
                c1=c;
            }else if(c<=c2){
                c2=c;
            }else{
                return true;
            }
        }return false;
    }
};