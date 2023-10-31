//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int fun(string &s,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int a=INT_MAX,b=INT_MAX,c=INT_MAX;
        if(s[i]==s[j])
        a=fun(s,i+1,j-1,dp);
        else
        {
            b=fun(s,i+1,j,dp)+1;
            c=fun(s,i,j-1,dp)+1;
        }
        return dp[i][j]=min({a,b,c});
    }
    int findMinInsertions(string s){
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return fun(s,0,n-1,dp);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends