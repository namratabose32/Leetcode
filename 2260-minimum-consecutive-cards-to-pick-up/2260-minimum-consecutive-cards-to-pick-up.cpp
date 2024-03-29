class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans=INT_MAX;
        map<int,int> mp;
        mp[cards[0]]=0;
        for(int i=1;i<cards.size();i++){
            if(mp.find(cards[i])!=mp.end()){
                if(i-mp[cards[i]]<ans){
                    ans=i-mp[cards[i]]+1;
                }
            }
            mp[cards[i]]=i;
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};