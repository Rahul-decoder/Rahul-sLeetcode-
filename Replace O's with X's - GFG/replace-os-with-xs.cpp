//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void fun(vector<vector<char>>&mat,int i,int j,vector<vector<int>>&vis,vector<pair<int,int>>&v,int n,int m,int &flag)
{
    if(i>=n||j>=m||i<0||j<0||mat[i][j]=='X'||vis[i][j]==1)
    return;
    if(i==0||j==0||i==n-1||j==m-1)
    {
        if(mat[i][j]=='O')
        {
            flag=1;
            return;
        }
    }
    vis[i][j]=1;
    v.push_back({i,j});
    fun(mat,i+1,j,vis,v,n,m,flag);
    fun(mat,i-1,j,vis,v,n,m,flag);
    fun(mat,i,j+1,vis,v,n,m,flag);
    fun(mat,i,j-1,vis,v,n,m,flag);
}
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n,vector<int>(m,-1));
        int i,j,k;
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                int flag=0;
                vector<pair<int,int>> v;
                if(mat[i][j]=='O'&&vis[i][j]==-1)
                fun(mat,i,j,vis,v,n,m,flag);
                if(flag==0)
                {
                    for(k=0;k<v.size();k++)
                        mat[v[k].first][v[k].second]='X';
                }
                
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends