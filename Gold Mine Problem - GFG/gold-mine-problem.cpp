//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fun(vector<vector<int>> &M,int i,int j,int n,int m,vector<vector<int>>&v)
{
    if(i>=n||j>=m||i<0||j<0)
    return 0;
    if(v[i][j]!=0)
    return v[i][j];
    int a=M[i][j]+fun(M,i-1,j+1,n,m,v);
    int b=M[i][j]+fun(M,i,j+1,n,m,v);
    int c=M[i][j]+fun(M,i+1,j+1,n,m,v);
    return v[i][j]= max({a,b,c});
}
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int maxi=INT_MIN,i;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            maxi=max(maxi,fun(M,i,0,n,m,v));
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends