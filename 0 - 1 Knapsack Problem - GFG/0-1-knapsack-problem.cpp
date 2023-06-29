//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int fun(int w,int wt[],int val[],int i,int sum,vector<vector<int>>&dp,int n)
    {
        if(sum>w)
        return -val[i-1];
        if(i>=n)
        return 0;
        if(dp[i][sum]!=-1)
        return dp[i][sum];
        return dp[i][sum]= max(fun(w,wt,val,i+1,sum,dp,n),val[i]+fun(w,wt,val,i+1,sum+wt[i],dp,n));
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n,vector<int>(w+1,-1));
       return fun(w,wt,val,0,0,dp,n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends