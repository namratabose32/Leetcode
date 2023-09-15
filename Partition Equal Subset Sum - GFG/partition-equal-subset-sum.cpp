//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     bool isPossible(int Sum, int arr[], int idx)
    {
        if(Sum <= 0 || idx < 0) 
        {
            return Sum == 0;
        }
        return isPossible(Sum-arr[idx], arr, idx-1) || isPossible(Sum, arr, idx-1);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int TotalSum = 0;
        for(int i = 0; i < N; i++)
        {
            TotalSum += arr[i];
        }
        
        if(TotalSum%2)return false;
        return isPossible(TotalSum/2, arr, N-1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends