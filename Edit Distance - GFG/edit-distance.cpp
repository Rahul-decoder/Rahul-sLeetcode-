//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fun(string &s,string &t,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=s.size())
        return t.size()-j;
        if(j>=t.size())
        return s.size()-i;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int a=INT_MAX,b=INT_MAX,c=INT_MAX,d=INT_MAX;
        if(s[i]==t[j])
        a=fun(s,t,i+1,j+1,dp);
        else
        {
            b=1+fun(s,t,i,j+1,dp);
            c=1+fun(s,t,i+1,j,dp);
            d=1+fun(s,t,i+1,j+1,dp);
        }
        return dp[i][j]=min({a,b,c,d});
    }
    int editDistance(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return fun(s,t,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends