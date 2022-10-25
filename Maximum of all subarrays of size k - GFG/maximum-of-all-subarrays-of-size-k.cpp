//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        // your code here
        set<pair<int,int>,greater<pair<int,int>>> s;
        for(int i=0;i<k;i++){
            s.insert({nums[i],i});
        }
        vector<int> ans;
        ans.push_back(s.begin()->first);
        for(int i=k,j=0;i<n;i++,j++){
            s.erase({nums[j],j});
            s.insert({nums[i],i});
            ans.push_back(s.begin()->first);
        }return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends