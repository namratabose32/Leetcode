class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(auto x:tasks){
            mp[x]++;
        }
        int ans=0;
        for(auto t:mp){
            int x=t.second;
            if(x==1)
                return -1;
            if(x%3==0){
                ans+=x/3;
            }else if(x%3==2){
                ans+=x/3;
                ans++;
            }else if(x%3==1){
                ans+=x/3;
                ans++;
            }else{
                ans+=x/2;
            }
        }return ans;
    }
};