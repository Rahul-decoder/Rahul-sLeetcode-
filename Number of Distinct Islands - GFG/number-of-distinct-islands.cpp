//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void dfs(vector<vector<int>> &grid,int i,int j, int n,int m,vector<pair<int,int>> &v,int r,int p)
    {
        if(i>=n||j>=m||i<0||j<0||grid[i][j]==0)
        return ;
        grid[i][j]=0;
        v.push_back({i-r,j-p});
        dfs(grid,i+1,j,n,m,v,r,p);
        dfs(grid,i-1,j,n,m,v,r,p);
        dfs(grid,i,j-1,n,m,v,r,p);
        dfs(grid,i,j+1,n,m,v,r,p);
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
       int i,j,n=grid.size(),m=grid[0].size(),k;
       set<vector<pair<int,int>>> s;
       vector<pair<int,int>> v;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(grid[i][j]==1)
               {
                dfs(grid,i,j,n,m,v,i,j);
                s.insert(v);
                v.clear();
               }
           }
       }
       return s.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends