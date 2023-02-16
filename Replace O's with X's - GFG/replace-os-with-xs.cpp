//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    void dfs(vector<vector<char>> &mat,int i,int j,vector<pair<int,int>> &v)
    {
        int n=mat.size(),m=mat[0].size();
        if(i>=n||j>=m||i<0||j<0||mat[i][j]=='X')
        return ;
        mat[i][j]='X';
        v.push_back({i,j});
        dfs(mat,i+1,j,v);
        dfs(mat,i-1,j,v);
        dfs(mat,i,j+1,v);
        dfs(mat,i,j-1,v);
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        int i,j;
       vector<pair<int,int>> v;
        for(i=0;i<n;i++)
        {
           if(mat[i][0]=='O')
           dfs(mat,i,0,v);
           if(mat[i][m-1]=='O')
           dfs(mat,i,m-1,v);
        }
        for(i=0;i<m;i++)
        {
           if(mat[0][i]=='O')
           dfs(mat,0,i,v);
           if(mat[n-1][i]=='O')
           dfs(mat,n-1,i,v);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               mat[i][j]='X';
            }
        }
        for(i=0;i<v.size();i++)
        {
            mat[v[i].first][v[i].second]='O';
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