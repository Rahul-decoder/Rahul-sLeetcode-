//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int fun(long long int n,vector<long long int>&dp)
  {
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=(fun(n-1,dp)+fun(n-2,dp))%1000000007;
  }
    long long numberOfWays(long long n) {
        vector<long long int> dp(n+1,-1);
        return fun(n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends