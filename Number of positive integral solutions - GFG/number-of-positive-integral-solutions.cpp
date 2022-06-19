// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    long fact(int n){
        long f=1;
        for(int i=2;i<=n;i++)
            f*=i;
        return f;
    }
    long posIntSol(string s)
    {
        int n=0,eq=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+')
                n++;
            if(s[i]=='=')
                eq=i;
        }
        long num=stol(s.substr(eq+1))-1,numerator=1;
        for(int j=0;j<n;j++){
            numerator*=num;
            num--;
        }
        long denominator=fact(n);
        long ans=numerator/denominator;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends