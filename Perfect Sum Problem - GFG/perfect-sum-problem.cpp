//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int fun(int arr[],int n,int sum, int i,vector<vector<int>> &dp)
	{
	    if(sum==0)
	    return 1;
	    if(i>=n||sum<0)
	    return 0;
	    if(dp[i][sum]!=-1)
	    return dp[i][sum];
	    return dp[i][sum]=(fun(arr,n,sum-arr[i],i+1,dp)+fun(arr,n,sum,i+1,dp))%1000000007;
	}
	int perfectSum(int arr[], int n, int sum)
	{
       vector<vector<int>> dp(n,vector<int>(sum+1,-1));
       sort(arr,arr+n);
       return fun(arr,n,sum,0,dp);
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends