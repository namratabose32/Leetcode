//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
          int a = 0, b = 0, minDiff = INT_MAX;
        int i = 0, j = m - 1; // Initialize pointers for arr and brr

        while (i < n && j >= 0) 
        {
            int sum = arr[i] + brr[j];
            int diff = abs(x - sum);

            if (diff < minDiff) 
            {
                a = arr[i];
                b = brr[j];
                minDiff = diff;
            }
            (sum < x)?i++:j--; 
        }
        return {a, b};
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends