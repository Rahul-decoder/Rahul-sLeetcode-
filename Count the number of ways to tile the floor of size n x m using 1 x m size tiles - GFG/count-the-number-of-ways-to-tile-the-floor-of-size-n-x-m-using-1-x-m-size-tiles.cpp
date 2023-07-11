//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int fun(int n,int m,vector<int>&dp)
	{
	    if(n<=0)
	    return 0;
	    if(n==1)
	    return 1;
	    if(n==m)
	    return 2;
	    if(dp[n]!=-1)
	    return dp[n];
	    return dp[n]=(fun(n-1,m,dp)+fun(n-m,m,dp))%1000000007;
	}
	int countWays(int n, int m)
	{
	   vector<int> dp(n+1,-1);
	   return fun(n,m,dp);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.countWays(n, m);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends