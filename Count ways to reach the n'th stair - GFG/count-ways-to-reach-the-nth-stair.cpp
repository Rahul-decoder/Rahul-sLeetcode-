//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int fun(int n,vector<int> &v)
    {
        if(n<0)
        return 0;
        if(n==0)
        return 1;
        if(v[n]!=0)
        return v[n];
        return v[n]=(fun(n-1,v)+fun(n-2,v))%1000000007;
    }
    int countWays(int n)
    {
        vector<int> v(n+1,0);
        return fun(n,v);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends