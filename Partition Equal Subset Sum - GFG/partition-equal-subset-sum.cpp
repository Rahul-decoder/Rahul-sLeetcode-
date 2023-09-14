//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fun(int arr[],int n,vector<vector<int>>&dp,int i,long long int sum1,long long int &sum)
{
    if(sum1==sum/2)
    return 1;
    if(i>=n||sum1>sum/2)
    return 0;
    if(dp[i][sum1]!=-1)
    return dp[i][sum1];
    int a=fun(arr,n,dp,i+1,sum1+arr[i],sum);
    int b=fun(arr,n,dp,i+1,sum1,sum);
    return dp[i][sum1]=a|b;
    
}
    int equalPartition(int n, int arr[])
    {
        long long int sum=0,i;
        for(i=0;i<n;i++)
        sum+=arr[i];
        if(sum%2!=0)
        return 0;
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return fun(arr,n,dp,0,0,sum);
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