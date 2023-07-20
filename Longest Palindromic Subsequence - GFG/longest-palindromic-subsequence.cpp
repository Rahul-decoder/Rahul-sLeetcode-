//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int fun(string &s,string &s1,vector<vector<int>>&dp,int i,int j,int n)
  {
      if(i>=n||j>=n)
      return 0;
      if(dp[i][j]!=-1)
      return dp[i][j];
      if(s[i]==s1[j])
      return dp[i][j]=1+fun(s,s1,dp,i+1,j+1,n);
      else
      return dp[i][j]=max(fun(s,s1,dp,i+1,j,n),fun(s,s1,dp,i,j+1,n));
  }
    int longestPalinSubseq(string s) {
       string s1=s;
       int n=s.size();
       reverse(s1.begin(),s1.end());
       vector<vector<int>> dp(n,vector<int>(n,-1));
       return fun(s,s1,dp,0,0,n);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends