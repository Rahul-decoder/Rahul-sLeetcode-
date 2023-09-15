//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int fun(int n,vector<int>&dp,int i)
    {
        if(i>n)
        return 0;
        if(i==n)
        return 1;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=((fun(n,dp,i+1)+fun(n,dp,i+2))%1000000007+fun(n,dp,i+3))%1000000007;
    }
    long long countWays(int n)
    {
        vector<int> dp(n,-1);
        return fun(n,dp,0);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends