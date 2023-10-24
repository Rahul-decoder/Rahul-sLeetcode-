//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fun(int n,int w,int i,vector<vector<int>>&dp,int val[],int wt[])
{
    if(i>=n)
    return 0;
    if(dp[i][w]!=-1)
    return dp[i][w];
    int a=0,b=0;
    if(w>=wt[i])
    {
         a=fun(n,w-wt[i],i,dp,val,wt)+val[i];
         b=fun(n,w-wt[i],i+1,dp,val,wt)+val[i];
    }
    int c=fun(n,w,i+1,dp,val,wt);
    return dp[i][w]=max({a,b,c});
}
    int knapSack(int n, int w, int val[], int wt[])
    {
        vector<vector<int>> dp(n,vector<int>(w+1,-1));
        return fun(n,w,0,dp,val,wt);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends