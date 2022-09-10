class Solution {
public:
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end());
        int c=0,n=properties.size();
        int mx=properties[n-1][1],a=properties[n-1][0],b=properties[n-1][1];
        for(int i=n-2;i>=0;i--){
            if(properties[i][0]<properties[i+1][0]) {
                b=max(mx,b);
                mx=max(b,properties[i][1]); 
            }
            if(properties[i][0]<a && properties[i][1]<b)
                c++;
        }return c;
    }
};