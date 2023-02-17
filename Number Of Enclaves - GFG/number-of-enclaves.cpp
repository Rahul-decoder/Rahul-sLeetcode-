//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>> &grid,int i,int j,int n,int m)
  {
      if(i>=n||j>=m||i<0||j<0||grid[i][j]==0)
      return ;
      grid[i][j]=0;
      dfs(grid,i+1,j,n,m);
      dfs(grid,i-1,j,n,m);
      dfs(grid,i,j-1,n,m);
      dfs(grid,i,j+1,n,m);
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
       int i,j,n=grid.size(),m=grid[0].size(),count=0;
       for(i=0;i<n;i++)
       {
          if(grid[i][0]==1)
          dfs(grid,i,0,n,m);
          if(grid[i][m-1]==1)
          dfs(grid,i,m-1,n,m);
       }
       for(i=0;i<m;i++)
       {
          if(grid[0][i]==1)
          dfs(grid,0,i,n,m);
          if(grid[n-1][i]==1)
          dfs(grid,n-1,i,n,m);
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           if(grid[i][j]==1)
           count++;
       }
       return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends