//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

#define mod 1000000007
class Solution
{
public:
int fun(int n,vector<int>&dp)
{
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=(fun(n-1,dp)%mod+((long long)(n-1)*(fun(n-2,dp)%mod))%mod)%mod;
}
    int countFriendsPairings(int n) 
    { 
        vector<int> dp(n+1,-1);
        return fun(n,dp);
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends