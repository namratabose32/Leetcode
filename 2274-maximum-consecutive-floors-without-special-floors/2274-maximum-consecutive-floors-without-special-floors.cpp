class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int mx=special[0]-bottom;
        for(int i=1;i<special.size();i++){
            int x=special[i]-special[i-1];
            mx=max(mx,x-1);
        }
        int x=top-special[special.size()-1];
        // if(x==1)
        //     return mx;
        mx=max(mx,x);
        return mx;
    }
};