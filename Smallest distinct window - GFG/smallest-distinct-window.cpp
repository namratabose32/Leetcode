// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int findSubString(string str)
    {
        // Your code goes here 
        int count=0;
        unordered_map<char,int>ss;
        int n = str.size();
        for(int i=0;i<n;i++)
        {
            if(ss.find(str[i])==ss.end()){
                count++;
            }
            ss[str[i]]++;
        }
        unordered_map<char,int>mp;
        int i=0,j=0,temp=0,length=INT_MAX;
        while(i<=j && j<n)
        {
            if(temp<count)
            {
                if(mp[str[j]]==0){
                    temp++;
                }
                mp[str[j]]++;
                j++;
            }
            else if(temp==count){
                length = min(length,j-i);
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    temp--;
                }
                i++;
            }
        }
        while(count==temp){
            length = min(length,j-i);
            if(mp[str[i]]==1){
                temp--;
            }
            mp[str[i]]--;
            i++;
        }
        return length;
    }
};


// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends