//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int fun(vector<int>&arr,vector<vector<int>>&dp,int i,int j,int k)
    {
        if(arr[j]-arr[i]<=k||i>j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(arr[j]-arr[i]>k)
        return dp[i][j]=min(fun(arr,dp,i+1,j,k),fun(arr,dp,i,j-1,k))+1;
    }
    int removals(vector<int>& arr, int k){
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        sort(arr.begin(),arr.end());
        return fun(arr,dp,0,n-1,k);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends