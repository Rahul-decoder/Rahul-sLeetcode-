//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    int fun(string &s1,string &s2,int n,int m, vector<vector<int>>&v,int i,int j)
    {
        if(i>=n||j>=m)
        return 0;
        if(v[i][j]!=-1)
        return v[i][j];
        if(s1[i]==s2[j])
        return v[i][j]=fun(s1,s2,n,m,v,i+1,j+1)+1;
        else
        return v[i][j]=max(fun(s1,s2,n,m,v,i+1,j),fun(s1,s2,n,m,v,i,j+1));
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> v(n,vector<int>(m,-1));
        return fun(s1,s2,n,m,v,0,0);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends