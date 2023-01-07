class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,total=0,ans=0;
        for(int i=0;i<cost.size();i++){
            total+=gas[i]-cost[i];
            sum+=gas[i]-cost[i];
            if(sum<0){
                sum=0;
                ans=i+1;
            }
        }
        if(total<0)
            return -1;
        return ans;
    }
};