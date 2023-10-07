//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int fun(string &a,string &b,string &c,vector<vector<int>> &dp,int i,int j)
    {
        if(i==a.size()&&j==b.size())
        return 1;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(i<a.size()&&a[i]==c[i+j])
        {
            dp[i][j]=fun(a,b,c,dp,i+1,j);
            if(dp[i][j])
            return 1;
        }
        if(j<b.size()&&b[j]==c[i+j])
        {
            dp[i][j]=fun(a,b,c,dp,i,j+1);
            if(dp[i][j])
            return 1;
        }
        return 0;
    }
    bool isInterleave(string a, string b, string c) 
    {
       int na=a.size(),nb=b.size(),nc=c.size();
       vector<vector<int>> dp(na+1,vector<int>(nb+1,-1));
       return fun(a,b,c,dp,0,0);
    }

};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends