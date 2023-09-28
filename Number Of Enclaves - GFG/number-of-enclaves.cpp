//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int count=0;
  void fun(vector<vector<int>>&grid,int i,int j,int n,int m)
  {
      if(i<0||j<0||i>=n||j>=m||grid[i][j]==0)
      return ;
      grid[i][j]=0;
      count++;
      fun(grid,i+1,j,n,m);
      fun(grid,i-1,j,n,m);
      fun(grid,i,j+1,n,m);
      fun(grid,i,j-1,n,m);
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
         int i,j,n=grid.size(),m=grid[0].size();
         for(i=0;i<n;i++)
         {
            if(grid[i][0]==1)
            fun(grid,i,0,n,m);
         }
         for(i=0;i<n;i++)
         {
             if(grid[i][m-1]==1)
             fun(grid,i,m-1,n,m);
         }
         for(i=0;i<m;i++)
         {
             if(grid[0][i]==1)
             fun(grid,0,i,n,m);
         }
         for(i=0;i<m;i++)
         {
             if(grid[n-1][i]==1)
             fun(grid,n-1,i,n,m);
         }
         count=0;
         for(i=1;i<n-1;i++)
         {
             for(j=1;j<m-1;j++)
             {
                 if(grid[i][j]==1)
                 fun(grid,i,j,n,m);
             }
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